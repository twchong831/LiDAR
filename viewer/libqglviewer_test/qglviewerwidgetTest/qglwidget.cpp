#include "qglwidget.h"
#include <math.h>

qglwidget::qglwidget(QWidget *parent) : QGLViewer(parent)
{
	restoreStateFromFile();
}

void qglwidget::draw()
{
	const float nbSteps = 200.0;
	glBegin(GL_QUAD_STRIP);
	for(float i=0; i<nbSteps; ++i)
	{
		float ratio = i / nbSteps;
		float angle = 21.0 * ratio;
		float c = cos(angle);
		float s = sin(angle);
		float r1 = 1.0 - 0.8 * ratio;
		float r2 = 0.8 - 0.8 * ratio;
		float alt = ratio - 0.5;
		const float nor = 0.5;
		const float up = sqrt(1.0 - nor * nor);
		glColor3f(1.0 - ratio, 0.2f, ratio);
		glNormal3f(nor * c, up, nor * s);
		glVertex3f(r1 * c, alt, r1 * s);
		glVertex3f(r2 * c, alt + 0.05, r2 * s);
	}
	glEnd();

	drawAxis();
	drawGrid(10, 10);

	glBegin(GL_POINTS);
	for (int i = 0; i < nbPart_; i++)
	  particle_[i].draw();
	glEnd();
}

void qglwidget::init()
{
	restoreStateFromFile();
	glDisable(GL_LIGHTING);
	nbPart_ = 2000;
	particle_ = new Particle[nbPart_];
	glPointSize(2.0);
	setGridIsDrawn();
//	help();
	startAnimation();
}

void qglwidget::animate()
{
	for (int i = 0; i < nbPart_; i++)
	  particle_[i].animate();
}

Particle::Particle()
{
	init();
}

void Particle::animate() {
  speed_.z -= 0.05f;
  pos_ += 0.1f * speed_;

  if (pos_.z < 0.0) {
	speed_.z = -0.8 * speed_.z;
	pos_.z = 0.0;
  }

  if (++age_ == ageMax_)
	init();
}

void Particle::draw() {
  glColor3f(age_ / (float)ageMax_, age_ / (float)ageMax_, 1.0);
  glVertex3fv(pos_);
}

void Particle::init() {
  pos_ = qglviewer::Vec(0.0, 0.0, 0.0);
  float angle = 2.0 * M_PI * rand() / RAND_MAX;
  float norm = 0.04 * rand() / RAND_MAX;
  speed_ = qglviewer::Vec(norm * cos(angle), norm * sin(angle),
			   rand() / static_cast<float>(RAND_MAX));
  age_ = 0;
  ageMax_ = 50 + static_cast<int>(100.0 * rand() / RAND_MAX);
}

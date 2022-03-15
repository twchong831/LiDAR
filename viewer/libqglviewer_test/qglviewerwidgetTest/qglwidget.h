#ifndef QGLWIDGET_H
#define QGLWIDGET_H

//#include <QWidget>
#include <QGLViewer/qglviewer.h>

class Particle {
public:
  Particle();

  void init();
  void draw();
  void animate();

private:
  qglviewer::Vec speed_, pos_;
  int age_, ageMax_;
};

class qglwidget : public QGLViewer
{
//	Q_OBJECT
public:
	explicit qglwidget(QWidget *parent = nullptr);

protected:
	virtual void draw();
	virtual void init();
	virtual void animate();

signals:

private:
	int nbPart_;
	Particle *particle_;
};

#endif // QGLWIDGET_H

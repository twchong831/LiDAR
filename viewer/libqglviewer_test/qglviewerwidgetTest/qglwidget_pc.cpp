#include "qglwidget_pc.h"
#include <QDebug>

qglwidget_pc::qglwidget_pc(QWidget *parent)
	: QGLViewer{parent}
{
	restoreStateFromFile();

	g_checkedAxis = false;
	g_axisSize = 1.0;

	g_checkedGrid = false;
	g_gridMax = 10.0;
	g_gridInterval = 1.0;

	qDebug() << "init color" << backgroundColor();
	g_backgroundColor = QColor(QString("#333333"));		//init background color

	m_pointcloud = new glPointCloud();

	camera()->setSceneRadius(10);		//사라지는거 보정...
}

void qglwidget_pc::generateAxis(float size)
{
	g_checkedAxis = true;
	g_axisSize = size;
}

void qglwidget_pc::setBackground(QColor color)
{
	g_backgroundColor = color;
}

void qglwidget_pc::setGrid(float max, float interval)
{
	g_checkedGrid = true;
	g_gridMax = max;
	g_gridInterval = interval;
}

void qglwidget_pc::addPointCloud(QVector<glPointCloud::PointXYZRGB> data, QString name)
{
//	m_pointcloud->addPointCloud(data, name);
	points = data;
}

void qglwidget_pc::draw()
{
//	glEnable(GL_CULL_FACE); //discards triangles facing away from the camera
//	glDisable(GL_CULL_FACE); //default, two-sided rendering
	glDisable(GL_LIGHTING);	//off light
	setBackgroundColor(g_backgroundColor);

	if(g_checkedGrid)
	{
		glColor3f(0.8,0.8,0.8);
		drawGrid(g_gridMax, g_gridMax/g_gridInterval);
	}

	if(g_checkedAxis)
		drawAxis(g_axisSize);

//	m_pointcloud->draw();
	glPointSize(3.0);
	glBegin(GL_POINTS);
	if(points.size() > 0)
	{
//		qDebug() << "data size : " << points.size();
		for(int i=0; i<points.size(); i++)
		{
			glColor3f(points[i].rgb.red()/255,
					  points[i].rgb.green()/255,
					  points[i].rgb.blue()/255);
			glVertex3fv(qglviewer::Vec(points[i].point.x(),
									   points[i].point.y(),
									   points[i].point.z()));
		}
	}
	glEnd();
}

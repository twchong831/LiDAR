#ifndef GLPOINTCLOUD_H
#define GLPOINTCLOUD_H

#include <QGLViewer/qglviewer.h>
#include <QVector3D>

class glPointCloud
{
public:
	glPointCloud();

	typedef struct pointxyzrgb
	{
//		float x, y, z;
		QVector3D point;
		QColor rgb;
		pointxyzrgb() {}
	}PointXYZRGB;

//	void init();
	void draw();
//	void animate();

	void addPointCloud(QVector<PointXYZRGB> data, QString name);

private:
	qglviewer::Vec pos_;

	QVector< QVector<PointXYZRGB> > g_totalPointCloud;
};

#endif // GLPOINTCLOUD_H

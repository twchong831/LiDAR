#include "glpointcloud.h"
#include <QDebug>

glPointCloud::glPointCloud()
{
}

void glPointCloud::draw()
{
	glPointSize(3.0);
	glBegin(GL_POINTS);
	qDebug() << "total size : " << g_totalPointCloud.size();
	for(int i=0; i<g_totalPointCloud.size(); i++)
	{
		qDebug() << "pointcloud size : " << g_totalPointCloud[i].size();
		for(int j=0; j<g_totalPointCloud[i].size(); j++)
		{
			qDebug() << "Point " << g_totalPointCloud[i][j].point;
			glColor3f(g_totalPointCloud[i][j].rgb.redF(),
					  g_totalPointCloud[i][j].rgb.blueF(),
					  g_totalPointCloud[i][j].rgb.greenF());
			glVertex3fv(qglviewer::Vec(g_totalPointCloud[i][j].point.x(),
									   g_totalPointCloud[i][j].point.y(),
									   g_totalPointCloud[i][j].point.z()));
		}
	}

	glEnd();
}

void glPointCloud::addPointCloud(QVector<PointXYZRGB> data, QString name)
{
	g_totalPointCloud.push_back(data);
}

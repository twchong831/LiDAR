#ifndef QGLWIDGET_PC_H
#define QGLWIDGET_PC_H

//#include <QWidget>
#include <QGLViewer/qglviewer.h>
#include <QGLViewer/camera.h>
#include <QMatrix4x4>

#include "glpointcloud.h"
class qglwidget_pc : public QGLViewer
{
	Q_OBJECT
public:
	explicit qglwidget_pc(QWidget *parent = nullptr);

	void generateAxis(float size=1.0);
	void setBackground(QColor color);

	void setGrid(float max, float interval);

	void addPointCloud(QVector<glPointCloud::PointXYZRGB> data, QString name);

protected:
	virtual void draw() override;
//	void resizeGL(int width, int height) override;

signals:

private:
	bool g_checkedAxis;
	float g_axisSize;

	QColor g_backgroundColor;

	bool g_checkedGrid;
	float g_gridMax;
	float g_gridInterval;

	glPointCloud *m_pointcloud;
	QVector<glPointCloud::PointXYZRGB> points;
};

#endif // QGLWIDGET_PC_H

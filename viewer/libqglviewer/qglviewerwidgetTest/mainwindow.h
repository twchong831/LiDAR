#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include "qglwidget.h"
#include "qglwidget_pc.h"
#include "glpointcloud.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

	//make points
	void makePoints(const float &length);
	void updatePoints(const float &length);
	float deg2rad(const float &degree);

public slots:
	void timerUpdate();

private:
	Ui::MainWindow *ui;

	qglwidget *m_qglwidget;

	qglwidget_pc *m_glwidget_2nd;

	float VL_AS16_vertical_SIN[16];
	float VL_AS16_vertical_COS[16];

	float VL_AS16_horizontal_SIN[1160];
	float VL_AS16_horizontal_COS[1160];

	float m_length;

	QVector<glPointCloud::PointXYZRGB> g_pcData;

	//timer for update
	QTimer *timer_update;
	float g_testLength = 0.5;
};
#endif // MAINWINDOW_H

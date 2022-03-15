#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	m_qglwidget = new qglwidget(this);
	m_glwidget_2nd = new qglwidget_pc(this);

	ui->layout_glviewer->addWidget(m_qglwidget, 0,0);
	ui->layout_glviewer->addWidget(m_glwidget_2nd, 0,1);

	//init for point cloud
	for(int i=0; i<16; i++)
	{
		VL_AS16_vertical_SIN[i] = sin(deg2rad(0.6 * (7 - i)));
		VL_AS16_vertical_COS[i] = cos(deg2rad(0.6 * (7 - i)));
	}

	for(int i=0; i<1160; i++)
	{
		VL_AS16_horizontal_SIN[i] = sin(deg2rad(0.125 * i));
		VL_AS16_horizontal_COS[i] = cos(deg2rad(0.125 * i));
	}

//	ui->viewer->help();	//active...
//	ui->viewer->setBackgroundColor(Qt::red);	//반영이 안됨...
//	ui->viewer->setCamera(m_qglwidget->camera());
//	ui->viewer-;
//	ui->viewer->drawAxis(2.0);
	m_glwidget_2nd->generateAxis();
	m_glwidget_2nd->setGrid(10,1);
//	m_glwidget_2nd->drawGrid();

	makePoints(0.5);
	m_glwidget_2nd->addPointCloud(g_pcData, "dum");

	timer_update = new QTimer(this);
	connect(timer_update, SIGNAL(timeout()), this, SLOT(timerUpdate()));
	timer_update->start(10);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::makePoints(const float &length)
{
	float d_len = length;
	glPointCloud::PointXYZRGB point;
	g_pcData.clear();
	for(int i=0; i<16; i++)
	{
		for(int j=0; j<1160; j++)
		{
			point.point.setX(d_len * VL_AS16_vertical_COS[i] * VL_AS16_horizontal_SIN[j]);
			point.point.setY(d_len * VL_AS16_vertical_COS[i] * VL_AS16_horizontal_COS[j]);
			point.point.setZ(d_len * VL_AS16_vertical_SIN[i]);
			point.rgb = Qt::red;

			g_pcData.push_back(point);
		}
	}
}

void MainWindow::updatePoints(const float &length)
{

}

float MainWindow::deg2rad(const float &degree)
{
	return ( degree * M_PI ) / 180 ;
}

void MainWindow::timerUpdate()
{
	makePoints(g_testLength);
	m_glwidget_2nd->addPointCloud(g_pcData, "dum");
	m_glwidget_2nd->update();

	g_testLength += 0.1;

	if(g_testLength > 5.0)
	{
		g_testLength = 0.5;
	}
}


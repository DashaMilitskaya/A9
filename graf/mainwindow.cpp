#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

     connect(ui->verticalSlider, SIGNAL (valueChanged(int)), this, SLOT (Painting(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


RadialGradient::RadialGradient(QWidget *parent)
    : QWidget(parent)
{ this->resize(1000,1000);}

void RadialGradient::paintEvent(QPaintEvent *e) {

  Q_UNUSED(e);

  doPainting(255);
}

void RadialGradient::doPainting(int a) {

  QPainter painter(this);

  int h = height();
  int w = width();

  QRadialGradient grad1(w/4, h/4, a);

  grad1.setColorAt(0, Qt::red);
  grad1.setColorAt(0.3, qRgb(0,a,0));
  grad1.setColorAt(1, Qt::black);
   grad1.setColorAt(0.4, qRgb(a,a/3,255));

  painter.fillRect(0, 0, w/2, h/2, grad1);
}



void MainWindow :: Painting(int a){


window->resize(a*2, a*2);

}

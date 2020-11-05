#include "mainwindow.h"
#include <QPainter>
#include <QApplication>
#include <QWidget>
#include <QSlider>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();

    return a.exec();
}

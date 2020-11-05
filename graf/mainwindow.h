#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPainter>
#include <QApplication>
#include <QWidget>
#include <QSlider>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class RadialGradient : public QWidget {

  public:
    RadialGradient(QWidget *parent = 0);

  protected:
    void paintEvent(QPaintEvent *e);

  public:
    void doPainting(int a);
};

class MainWindow : public QMainWindow
{
    Q_OBJECT;

public:
    MainWindow(QWidget *parent = nullptr);
    RadialGradient*  window= new RadialGradient(this);;
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
  void Painting(int a);
};




#endif // MAINWINDOW_H

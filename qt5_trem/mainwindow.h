#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "trem.h"
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void updateInterface(int,int,int);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_VelocidadeTrem01_actionTriggered(int action);

    void on_VelocidadeTrem01_sliderMoved(int position);

    void on_VelocidadeTrem01_valueChanged(int value);

    void on_VelocidadeTrem01_sliderReleased();

    void on_VelocidadeTrem02_sliderReleased();

    void on_VelocidadeTrem03_sliderReleased();

    void on_VelocidadeTrem04_sliderReleased();

    void on_VelocidadeTrem05_sliderReleased();

    void on_VelocidadeTrem02_valueChanged(int value);

    void on_VelocidadeTrem03_valueChanged(int value);

    void on_VelocidadeTrem04_valueChanged(int value);

    void on_VelocidadeTrem05_valueChanged(int value);

private:
    Ui::MainWindow *ui;

    //Cria os objetos TREM's
    Trem *trem1;
    Trem *trem2;
    Trem *trem3;
    Trem *trem4;
    Trem *trem5;
};

#endif // MAINWINDOW_H

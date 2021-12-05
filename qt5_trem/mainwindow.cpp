#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "trem.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Cria o trem com seu ID
    //E a sequência de trilhos que ele percorre.
    trem1 = new Trem(1, std::vector<size_t>{ 0, 4, 8, 7, 3 } );
    trem2 = new Trem(2, std::vector<size_t>{ 1, 5, 10, 9, 4 } );
    trem3 = new Trem(3, std::vector<size_t>{ 2, 6, 12, 11, 5 } );
    trem4 = new Trem(4, std::vector<size_t>{ 16, 13, 8, 9, 14 } );
    trem5 = new Trem(5, std::vector<size_t>{ 17, 14, 10, 11, 15 } );

    /*
     * Conecta o sinal UPDATEGUI à função UPDATEINTERFACE.
     * Ou seja, sempre que o sinal UPDATEGUI foi chamado, será executada a função UPDATEINTERFACE.
     * Os 3 parâmetros INT do sinal serão utilizados na função.
     * Trem1 e Trem2 são os objetos que podem chamar o sinal. Se um outro objeto chamar o
     * sinal UPDATEGUI, não haverá execução da função UPDATEINTERFACE
     */
    connect(trem1,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem2,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem3,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem4,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem5,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));

}

//Função que será executada quando o sinal UPDATEGUI for emitido
void MainWindow::updateInterface(int id, int x, int y){
    switch(id){
    case 1: //Atualiza a posição do objeto da tela (quadrado) que representa o trem1
        ui->label_trem1->setGeometry(x,y,21,17);
        break;
    case 2: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem2->setGeometry(x,y,21,17);
        break;
    case 3: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem3->setGeometry(x,y,21,17);
        break;
    case 4: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem4->setGeometry(x,y,21,17);
        break;
    case 5: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem5->setGeometry(x,y,21,17);
        break;
    default:
        break;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Ao clicar, trens começam execução
 */
void MainWindow::on_pushButton_clicked()
{
    trem1->start();
    trem2->start();
    trem3->start();
    trem4->start();
    trem5->start();
}

/*
 * Ao clicar, trens param execução
 */
void MainWindow::on_pushButton_2_clicked()
{
    trem1->terminate();
    trem2->terminate();
    trem3->terminate();
    trem4->terminate();
    trem5->terminate();
}


// Funções dos Sliders
void MainWindow::on_VelocidadeTrem01_actionTriggered(int action)
{

}

void MainWindow::on_VelocidadeTrem01_sliderMoved(int position)
{

}

void MainWindow::on_VelocidadeTrem01_sliderReleased()
{
    trem1->set_velocidade( (int) ui->VelocidadeTrem01->value() );
}

void MainWindow::on_VelocidadeTrem02_sliderReleased()
{
    trem2->set_velocidade( (int) ui->VelocidadeTrem02->value() );
}

void MainWindow::on_VelocidadeTrem03_sliderReleased()
{
    trem3->set_velocidade( (int) ui->VelocidadeTrem03->value() );
}

void MainWindow::on_VelocidadeTrem04_sliderReleased()
{
    trem4->set_velocidade( (int) ui->VelocidadeTrem04->value() );
}

void MainWindow::on_VelocidadeTrem05_sliderReleased()
{
    trem5->set_velocidade( (int) ui->VelocidadeTrem05->value() );
}

void MainWindow::on_VelocidadeTrem01_valueChanged(int value)
{
    trem1->set_velocidade( (int) ui->VelocidadeTrem01->value() );
}

void MainWindow::on_VelocidadeTrem02_valueChanged(int value)
{
    trem2->set_velocidade( (int) ui->VelocidadeTrem02->value() );
}

void MainWindow::on_VelocidadeTrem03_valueChanged(int value)
{
    trem3->set_velocidade( (int) ui->VelocidadeTrem03->value() );
}

void MainWindow::on_VelocidadeTrem04_valueChanged(int value)
{
    trem4->set_velocidade( (int) ui->VelocidadeTrem04->value() );
}

void MainWindow::on_VelocidadeTrem05_valueChanged(int value)
{
    trem5->set_velocidade( (int) ui->VelocidadeTrem05->value() );
}

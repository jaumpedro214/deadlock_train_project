#include "trem.h"
#include "trilho.h"
#include <QtCore>
#include <vector>
#include <iostream>

#define incrx 10
#define incry 10

std::vector<Trilho> malha = { Trilho(30, 30, 330, 30) };

//Construtor
Trem::Trem(int ID, int x, int y, const std::vector<size_t> &path_malha){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}

Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        switch(ID){
        case 1:     //Trem 1
            if (y == 30 && x <330)
                x+=10;
            else if (x == 330 && y < 150)
                y+=10;
            else if (x > 60 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 2: //Trem 2
            if (y == 30 && x <600)
                x+=10;
            else if (x == 600 && y < 150)
                y+=10;
            else if (x > 330 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        default:
            break;
        }
        msleep(velocidade);
    }
}





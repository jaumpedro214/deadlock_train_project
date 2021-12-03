#include "trem.h"
#include "trilho.h"
#include <QtCore>
#include <vector>
#include <iostream>

#define incrx 2
#define incry 2

std::vector<Trilho> malha = { //0-2 Linha horizontal superior
                              Trilho(30,  30, 130, 30),
                              Trilho(130, 30, 230, 30),
                              Trilho(230, 30, 330, 30),

                              //3-6 Linhas paralelas 1
                              Trilho(30 , 30,  30, 130),
                              Trilho(130, 30, 130, 130),
                              Trilho(230, 30, 230, 130),
                              Trilho(330, 30, 330, 130),

                              //7-12 Linha horizontal meio
                              Trilho(30, 130, 80, 130),
                              Trilho(80, 130, 130, 130),
                              Trilho(130, 130, 180, 130),
                              Trilho(180, 130, 230, 130),
                              Trilho(230, 130, 280, 130),
                              Trilho(280, 130, 330, 130),

                              //13-15 Linhas paralelas 2
                              Trilho(80, 130, 80, 230),
                              Trilho(180, 130, 180, 230),
                              Trilho(280, 130, 280, 230),

                              //16-17 Linha horizontal baixo
                              Trilho(180, 230, 80, 230),
                              Trilho(280, 230, 180,230)
                            };

//Construtor
Trem::Trem(int ID, const std::vector<size_t> &path_malha){
    this->ID = ID;
    this->x = malha[ path_malha[0] ].get_coord("x_start");
    this->y = malha[ path_malha[0] ].get_coord("y_start");
    this->path_malha = path_malha;
    velocidade = 10;
}

Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 50;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    int pos_malha = 0;
    int pos_path = 0;
    int reverser = 1;
    int num_trilhos = path_malha.size();

    pos_malha = path_malha[ pos_path ];
    x = malha[ pos_malha ].get_coord("x_start");
    y = malha[ pos_malha ].get_coord("y_start");

    while(true){
        pos_path = pos_path%num_trilhos;
        pos_malha = path_malha[ pos_path ];

        if( malha[pos_malha].is_the_start(x,y) )
            reverser =  1;
        else
            reverser = -1;
        do{
            x+=reverser*incrx*malha[pos_malha].get_xdir();
            y+=reverser*incry*malha[pos_malha].get_ydir();

            emit updateGUI(ID, x,y);
            msleep(velocidade);
        }
        while( !malha[pos_malha].is_the_end(x,y) &&
               !malha[pos_malha].is_the_start(x,y)
             );

        if (ID==4)
            printf("SAINDO DA LINHA %d\n", pos_malha);

        pos_path++;
    }

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





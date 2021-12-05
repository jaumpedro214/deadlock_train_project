#include "trem.h"
#include "trilho.h"
#include <QtCore>
#include <vector>
#include <iostream>
#include <mutex>

#define incrx 2
#define incry 2

std::vector<Trilho*> malha = {//0-2 Linha horizontal superior
                              new Trilho(30,  30, 130, 30),
                              new Trilho(130, 30, 230, 30),
                              new Trilho(230, 30, 330, 30),

                              //3-6 Linhas paralelas 1
                              new Trilho(30 , 30,  30, 130),
                              new Trilho(130, 30, 130, 130),
                              new Trilho(230, 30, 230, 130),
                              new Trilho(330, 30, 330, 130),

                              //7-12 Linha horizontal meio
                              new Trilho(30, 130, 80, 130),
                              new Trilho(80, 130, 130, 130),
                              new Trilho(130, 130, 180, 130),
                              new Trilho(180, 130, 230, 130),
                              new Trilho(230, 130, 280, 130),
                              new Trilho(280, 130, 330, 130),

                              //13-15 Linhas paralelas 2
                              new Trilho(80, 130, 80, 230),
                              new Trilho(180, 130, 180, 230),
                              new Trilho(280, 130, 280, 230),

                              //16-17 Linha horizontal baixo
                              new Trilho(180, 230, 80, 230),
                              new Trilho(280, 230, 180,230)
                            };

//Construtor
Trem::Trem(int ID, const std::vector<size_t> &path_malha){
    this->ID = ID;
    this->x = malha[ path_malha[0] ]->get_coord("x_start");
    this->y = malha[ path_malha[0] ]->get_coord("y_start");
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
    int pos_path = 0;
    int pos_malha = 0;

    pos_malha = path_malha[ pos_path ];
    x = malha[ pos_malha ]->get_coord("x_start");
    y = malha[ pos_malha ]->get_coord("y_start");
    emit updateGUI(ID, x,y);

    while(true){
        if( requerir_trilhos() ){
            for( pos_path=0; pos_path<path_malha.size(); pos_path++ ){
                pos_malha = path_malha[ pos_path ];
                andar_no_trilho(pos_malha);
                liberar_trilho(pos_malha);
            }
        }
        else{}
    }
}

bool Trem::requerir_trilhos(){
    int pos_malha;
    int pos_path;
    bool result = true;

    //Requerindo todos os trilhos
    for( pos_path=0; pos_path<path_malha.size(); pos_path++ ){
        pos_malha = path_malha[ pos_path ];
        result = result && malha[ pos_malha ]->mtx.try_lock();

        // Sai do loop se não conseguiu algum trilho
        if( !result )
            break;
    }

    //Se conseguiu todos os trilhos, retorna true
    if( result )
        return true;

    //Caso contrário, libera os trilhos que conseguiu
    //e retorna falso
    for( int i = 0; i < pos_path; i++ ){
        liberar_trilho( path_malha[ i ] );
    }
    return false;
}

void Trem::liberar_trilho( size_t id ){
    malha[ id ]->mtx.unlock();
}

void Trem::andar_no_trilho( size_t id ){
    int reverser = 1;

    // Reverte a direção do caminho
    if( malha[id]->is_the_end(x,y) )
        reverser = -1;
    else
        reverser =  1;

    do{
        x+=reverser*incrx*malha[id]->get_xdir();
        y+=reverser*incry*malha[id]->get_ydir();

        emit updateGUI(ID, x,y);
        msleep(velocidade);
    }
    while( !malha[id]->is_the_end(x,y) &&
           !malha[id]->is_the_start(x,y)
         );

}

void Trem::set_velocidade( int v ){
    velocidade = v;
}




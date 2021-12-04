#ifndef TREM_H
#define TREM_H

#include <QThread>
#include <vector>
#include "trilho.h"


/*
 * Classe Trem herda QThread
 * Classe Trem passa a ser uma thread.
 * A função START inicializa a thread. Após inicializada, a thread irá executar a função RUN.
 * Para parar a execução da função RUN da thread, basta executar a função TERMINATE.
 *
*/
class Trem: public QThread{
 Q_OBJECT
public:
    Trem(int,int,int);
    Trem(int, const std::vector<size_t> &path_malha);
    void run();         //função a ser executada pela thread
    void andar_no_trilho( size_t id );
    bool requerir_trilhos();
    void liberar_trilho( size_t id );


//Cria um sinal
signals:
    void updateGUI(int,int,int);

private:
   int x;           //posição X do trem na tela
   int y;           //posição Y do trem na tela
   int ID;          //ID do trem
   int velocidade;  //Velocidade. É o tempo de dormir em milisegundos entre a mudança de posição do trem
   std::vector<size_t> path_malha;
};

#endif // TREM_H

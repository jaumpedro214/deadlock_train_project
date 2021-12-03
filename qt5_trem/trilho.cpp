#include "trilho.h"
#include <string>

Trilho::Trilho(){}

Trilho::Trilho(int x_start, int y_start, int x_end, int y_end)
      :x_start(x_start), y_start(y_start), x_end(x_end), y_end(y_end){}

int Trilho::get_coord(std::string name){

    if( name == "x_start" ){
        return this->x_start;
    }
    else if( name == "y_start" ){
        return this->y_start;
    }
    else if( name == "x_end" ){
        return this->x_end;
    }
    else if( name == "y_end" ){
        return this->y_end;
    }
    return -1;

}

int Trilho::get_xdir(){
    int delta_x = x_end-x_start;
    return (int)(delta_x>0) - (int)(delta_x<0);
}

int Trilho::get_ydir(){
    int delta_y = y_end-y_start;
    return (int)(delta_y>0) - (int)(delta_y<0);
}

bool Trilho::is_the_end(int x, int y){
    return x==x_end && y==y_end;
}
bool Trilho::is_the_start(int x, int y){
    return x==x_start && y==y_start;
}

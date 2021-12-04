#ifndef TRILHO_H
#define TRILHO_H

#include <string>
#include <mutex>

class Trilho
{
private:
    int x_start, y_start, x_end, y_end;

public:
    std::mutex mtx;

    Trilho();
    Trilho(int x_start, int y_start, int x_end, int y_end);

    int get_coord(std::string name);
    int get_xdir();
    int get_ydir();
    bool is_the_end(int x, int y);
    bool is_the_start(int x, int y);
};

#endif // TRILHO_H

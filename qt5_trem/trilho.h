#ifndef TRILHO_H
#define TRILHO_H

#include <string>

class Trilho
{
private:
    int x_start, y_start, x_end, y_end;

public:
    Trilho();
    Trilho(int x_start, int y_start, int x_end, int y_end);

    int get_coord(std::string name);
};

#endif // TRILHO_H

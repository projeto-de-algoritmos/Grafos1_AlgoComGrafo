#ifndef PLANO2D_HPP
#define PLANO2D_HPP

#include <iostream>

constexpr int MAX_VALUE { 39 };

class Plano2D{

private:
    int mapaXY[40][40];
public:
    Plano2D();
    ~Plano2D();

    int get_mapaXY(int i, int j);
    void set_mapaXY(int i, int j, int value);

    void gerarPlano();
    void imprimirPlano();

};


#endif

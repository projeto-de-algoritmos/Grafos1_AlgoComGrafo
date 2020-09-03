#ifndef PLANO2D_HPP
#define PLANO2D_HPP

#include <iostream>
#include "grafo.hpp"


class Plano2D {

public:
    int mapaXY[40][40];
    Plano2D();
    ~Plano2D();

    int get_mapaXY(int i, int j);

    //Vai imprimir o plano2D


    //Vai converter os valores no mapa2D em cores de contaminados e bloqueados
    void conversorMapa(int x, int y);

};


#endif

#ifndef PLANO2D_HPP
#define PLANO2D_HPP

#include <iostream>
#include "grafo.hpp"
#include "integracaoGrafoPlano.hpp"

class Plano2D: public IntegracaoGrafoPlano {

private:
    int mapaXY[40][40];
public:
    Plano2D();
    ~Plano2D();

    int get_mapaXY(int i, int j);
    void set_mapaXY(int i, int j, int value);

    //Vai gerar um protipo para contaminados e bloqueados
    void gerarPlano();
    //Vai imprimir o plano2D
    void imprimirPlano();

    //Vai converter os valores no mapa2D em cores de contaminados e bloqueados
    void conversorMapa(int x, int y);

};


#endif

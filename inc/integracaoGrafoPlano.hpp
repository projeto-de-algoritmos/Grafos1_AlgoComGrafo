#ifndef INTEGRACAOGRAFOPLANO_HPP
#define INTEGRACAOGRAFOPLANO_HPP

#include "grafo.hpp"
#include "plano2D.hpp"
#include <thread>
#include <ctime>

class IntegracaoGrafoPlano : public Grafo, public Plano2D {

private:
    bool *contaminado = new bool[getV()];
    bool *bloqueado = new bool[getV()];
    bool *agente = new bool[getV()];


public:

    IntegracaoGrafoPlano();
    ~IntegracaoGrafoPlano();

    //Vai construir vertices em estrela nos nós de dentro
    void construirMapaGrafo();

    int getValorNo();
    void setValorNo(int valorNo);

    bool getContaminado(int no);
    void setContaminado(int no, bool status);

    bool getBloqueio(int no);
    void setBloqueio(int no, bool status);

    void juntarPlanoNo();

    void exameBFS(int inicial);
    void exameDFS(int inicial);
    void gerarContagio(int inicial, int chanceContagio);

    int getTotalBloqueados();
    int getTotalContaminados();

    string conversorMapa(int x, int y);

    string imprimirPlano();

    void loopImprime();

    void clearScreen();
    void case1();
    void case2();
    void case3();
    void case4();
    void case5();
    void case6();
    void case7();

};


#endif

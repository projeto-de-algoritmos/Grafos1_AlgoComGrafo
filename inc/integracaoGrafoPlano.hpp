#ifndef INTEGRACAOGRAFOPLANO_HPP
#define INTEGRACAOGRAFOPLANO_HPP

#include "grafo.hpp"

class IntegracaoGrafoPlano : public Grafo {

private:
    bool *contaminado = new bool[getV()];
    bool *bloqueado = new bool[getV()];


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

};


#endif

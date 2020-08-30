#include "../inc/geradoresAleatorios.hpp"

/*
1) rand() não gera número randômicos, gera uma 'sequencia' de números pseudoaleatórios
de acordo com um valor base srand(int). Se compilamos um arquivo com um:
    for(0<10)
        rand();
isso gerará uma sequencia de números que será sempre igual. Para contornar isso foi 
utilizado time(0) da <ctime> para alimentar o srand(), fazendo como que ele gere sequencias
pseudoaleatórias de acordo com a hora local, implicando uma sequencia de números pseudoaleatórios
um pouco mais aleatórios

2) se o rand() for calculado dentro da função ele irá repetir o mesmo valor todas as vezes para cada
execução do programa, a forma utilizada para contornar esse problema foi utilizar o (rand()%100 + 1) como
argumento da função.

*/
bool contagio(int chance, int contagio){ //chance = rand()%100 + 1   contagio = % de contagio da doença
    if(chance <= contagio)               //se a chance do individuo for menor que a % de contagio da doença
        return true;    //contaminado
    return false;       //não contaminado
}

/*
    O problema que mencionado na função de contágio é irrelevante para gerar os nós
    iniciais do Agente de Saúde e do Contaminado ja que eles só serão realizados uma única vez
*/
int inicioInfectado(int tamanho){   //tamanho do grafo, nós disponíveis
    srand((unsigned) time(0));
    return rand()% tamanho + 1;
}

int inicioAgenteSaude(int tamanho){ //tamanho do grafo, nós disponíveis
    srand((unsigned)time(0));
    return (RAND_MAX - rand())% tamanho + 1;
}
#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <iostream>
#include <list>
#include <queue>
#include <stack>

//Numero total da matrix 40x40
constexpr int MAX_VALUE { 40 };


using namespace std;

class Grafo{

private:
    int v;                      //Qnt de nós
    list<int> *adj;             //Ponteiro para lista de adjacencias (vizinhos do nó)
public:
    Grafo();
    Grafo(int v);                   //Construtor
    ~Grafo();
    int  getGraphSize ();
    void addEdge(int u, int v);     //Adiciona uma aresta
    string printEdge(int u, int v); //Retorna a string formatada da aresta: (U, V)

    void bfs(int inicial);      //Busca em largura a partir de um nó especifico
    void bfs();                 //Busca em largura a partir de um nó "aleatório"

    void dfs(int inicial);      //Busca em profundidade a partir de um nó específico
    void dfs();                 //Busca em profundidade a partir de um nó "aleatório"

    int getV();
    void setV(int v);

    void setAdj();

};

#endif

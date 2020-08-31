#include "../inc/grafo.hpp"

    Grafo::Grafo() {
        v = 1600;
        adj = new list<int>[v];
    }

    Grafo::Grafo(int v){
        this->v = v;               //Define o tamanho do grafo
        adj = new list<int>[v];    //Vetor de lista de adjacencias para os vizinhos de cada nó
    }

    int Grafo::getGraphSize(){
        return v;
    }
    void Grafo::addEdge(int u, int v){     //Adiciona uma aresta
    /**/
        adj[u].push_back(v);               //Adiciona uma aresta (u,v)
        //adj[v].push_back(u);               //Adiciona uma aresta (v,u)
    }
    string Grafo::printEdge(int u, int v){ //Retorna a string formatada da aresta: (U, V)
        return "(" + to_string(u) + " ," + to_string(v) + ")";
    }

    void Grafo::bfs(int inicial){     //Busca em largura a partir de um nó especifico
        queue<int> S;                 //Fila usada no algorítmo
        bool marcado[v];              //Vetor que guarda a informação se o nó V foi visitado

        for(int i = 0; i < v; i++)    //Marca todo mundo como não visitado
            marcado[i] = false;
        S.push(inicial);
        marcado[inicial] = true;

        while(!S.empty()){            //Enquanto a fila S nao estiver vazia
            list<int>::iterator i;
            v = S.front();            //Primeiro elemento da fila S
            S.pop();                  //Desenfileira

            for(i = adj[v].begin(); i != adj[v].end(); i++){  //Vai percorrer todos os elementos vizinhos de V
                if(!marcado[*i]){                             //Se o vzinho adj[*i] nao tiver sido visitado/marcado
                    cout << printEdge(v, *i) << endl;         //Imprime o caminho que esta sendo realizado pela busca
                    marcado[*i] = true;                       //Marca o nó *i como visitado
                    S.push(*i);                               //Insere o nó *i na fila S
                }
            }
        }
    }

    void Grafo::bfs(){                 //Busca em largura a partir de um nó "aleatório"
        int componente = 0;            //Indicador de componentes
        queue<int> S;
        bool marcado[v];

        for(int i = 0; i < v; i++)
            marcado[i] = false;

        for(int i = 0; i != v; i ++){    //Para percorrer todos os nós do grafo, conectado ou não
            S.push(i);                //Insere na fila S
            marcado[i] = true;        //Nó marcado/visitado

            while(!S.empty()){
                list<int>::iterator it;
                v = S.front();
                S.pop();
                for(it = adj[v].begin(); it != adj[v].end(); it++){
                    if(!marcado[*it]){
                        cout << "Componente: " << componente << " " << printEdge(v, *it) << endl; //Imprime o componente (primeiro nó do componente) e as aresta
                        marcado[*it] = true;
                        S.push(*it);
                    }
                }
            }
            componente++;
        }
    }

/*
    Na aula é mencionado que para criar uma busca em profundidade, basta utilizar
o mesmo algorítmo de busca em largura alterando a estrutura auxiliar de FILA para PILHA, então:
 */

    void Grafo::dfs(int inicial){     //Busca em largura a partir de um nó especifico
        stack<int> S;                 //Pilha usada no algorítmo
        bool marcado[v];              //Vetor que guarda a informação se o nó V foi visitado

        for(int i = 0; i < v; i++)    //Marca todo mundo como não visitado
            marcado[i] = false;
        S.push(inicial);
        marcado[inicial] = true;

        while(!S.empty()){            //Enquanto a pilha S nao estiver vazia
            list<int>::iterator it;
            v = S.top();            //Primeiro elemento da pilha S
            S.pop();                  //Desenfileira
            for(it = adj[v].begin(); it != adj[v].end(); it++){  //Vai percorrer todos os elementos vizinhos de V
                if(!marcado[*it]){                             //Se o vzinho adj[*i] nao tiver sido visitado/marcado
                    cout << printEdge(v, *it) << endl;         //Imprime o caminho que esta sendo realizado pela busca
                    marcado[*it] = true;                       //Marca o nó *i como visitado
                    S.push(*it);                               //Insere o nó *i na pilha S
                }
            }
        }
    }

    void Grafo::dfs(){                 //Busca em largura a partir de um nó "aleatório"
        stack<int> S;
        bool marcado[v];

        for(int i = 0; i < v; i++)
            marcado[i] = false;

        for(int i = 0; i != v; i ++){  //Para percorrer todos os nós do grafo, conectado ou não
            S.push(i);                 //Insere na pilha S
            marcado[i] = true;         //Nó marcado/visitado

            while(!S.empty()){
                list<int>::iterator it;
                v = S.top();
                S.pop();
                for(it = adj[v].begin(); it != adj[v].end(); it++){
                    if(!marcado[*it]){
                        cout << printEdge(v, *it) << endl;
                        marcado[*it] = true;
                        S.push(*it);
                    }
                }
            }
        }
    }

    int Grafo::getV() {
        return v;
    }

    void Grafo::setV(int v) {
        this->v = v;
    }

    void Grafo::setAdj() {
        adj = new list<int>[v];
    }


/*
        Para teste
    Grafo g(8);

    g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 3);
	g.addEdge(1, 4);
	g.addEdge(2, 5);
	//g.addEdge(2, 6);
	g.addEdge(6, 7);

    // cout << "BFS(0):" << endl;
    // g.bfs(0);

    // cout << "BFS( ): " << endl;
    // g.bfs();

    cout << "DFS(0): " << endl;
    g.dfs(0);

    cout << "DFS( ): " << endl;
    g.dfs();
*/

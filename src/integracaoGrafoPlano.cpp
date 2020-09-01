#include "../inc/integracaoGrafoPlano.hpp"
#include "../inc/geradoresAleatorios.hpp"

IntegracaoGrafoPlano::IntegracaoGrafoPlano(){
    for (int i = 0; i < 1600 ; i++) {
            contaminado[i] = false;
            bloqueado[i] = false;
    }
}

IntegracaoGrafoPlano::~IntegracaoGrafoPlano() {
    	delete contaminado;
        delete bloqueado;
}

void IntegracaoGrafoPlano::construirMapaGrafo() {


/*
    Essa seria a integração dos nós
       *  *  *
        \ | /
       *- 0 -*
        / | \
       *  *  *
*/

    for(int i = 0; i < MAX_VALUE; i++) {
        for (int j = 0; j < MAX_VALUE; j++) {

            //TODO integração das laterais

            if (i > 0 && i < 39 && j > 0 &&j < 39) {
                addEdge((40*i)+j,(40*(i-1))+j-1);  /* lado \  */
                addEdge((40*i)+j,(40*(i-1))+j);    /* lado |  */
                addEdge((40*i)+j,(40*(i-1))+j+1);  /* lado /  */
                addEdge((40*i)+j,(40*i)+j+1);      /* lado -  */
                addEdge((40*i)+j,(40*(i+1))+j+1);  /* lado \  */
                addEdge((40*i)+j,(40*(i+1))+j);    /* lado |  */
                addEdge((40*i)+j,(40*(i+1))+j-1);  /* lado /  */
                addEdge((40*i)+j,(40*(i))+j-1);    /* lado -  */

            }
        }
    }
}

bool IntegracaoGrafoPlano::getContaminado(int no) {
    return contaminado[no];
}
void IntegracaoGrafoPlano::setContaminado(int no, bool status) {
    contaminado[no] = status;
}

bool IntegracaoGrafoPlano::getBloqueio(int no) {
    return bloqueado[no];
}
void IntegracaoGrafoPlano::setBloqueio(int no, bool status) {
    bloqueado[no] = status;
}

void IntegracaoGrafoPlano::exameBFS(int inicial){
    queue<int> S;                 
    bool marcado[getV()];
    int noTemp;

    for(int i = 0; i < getV(); i++)    
        marcado[i] = false;

    S.push(inicial);
    marcado[inicial] = true;

    while(!S.empty()){
        list<int>::iterator i;
        noTemp = S.front();
        S.pop();

        if(contaminado[noTemp]){
            bloqueado[noTemp] = true;
        }

        for(i = adj[noTemp].begin(); i != adj[noTemp].end(); i++){ 
            if(!marcado[*i]){
                marcado[*i] = true;
                S.push(*i);
            }
        }
    }
}
void IntegracaoGrafoPlano::exameDFS(int inicial){
    stack<int> S;                 
    bool marcado[getV()];
    int noTemp;

    for(int i = 0; i < getV(); i++)    
        marcado[i] = false;

    S.push(inicial);
    marcado[inicial] = true;

    while(!S.empty()){
        list<int>::iterator i;
        noTemp = S.top();
        S.pop();

        if(contaminado[noTemp]){
            bloqueado[noTemp] = true;
        // }else{
        //     setContaminado(noTemp, contagio((rand()%100 + 1), 75);
        }

        for(i = adj[noTemp].begin(); i != adj[noTemp].end(); i++){ 
            if(!marcado[*i]){
                marcado[*i] = true;
                S.push(*i);
            }
        }
    }
}

void IntegracaoGrafoPlano::gerarContagio(int inicial, int chanceContagio){
    queue<int> S;
    srand((unsigned) time(0));
    bool marcado[getV()];
    int noTemp;

    for(int i = 0; i < getV(); i++)
        marcado[i] = false;

    S.push(inicial);
    marcado[inicial] = true;
    contaminado[inicial] = true;

    while(!S.empty()){
        list<int>::iterator i;
        noTemp = S.front();
        S.pop();

        // if(contaminado[noTemp]){
        //     contaminado[*i] = true;
        // }

        for(i = adj[noTemp].begin(); i != adj[noTemp].end(); i++){ 
            if(!marcado[*i]){
                marcado[*i] = true;
                S.push(*i);
            }
            if(contaminado[noTemp]){
                setContaminado(*i, contagio(rand()%100 + 1, chanceContagio));
            }
        }
    }
}
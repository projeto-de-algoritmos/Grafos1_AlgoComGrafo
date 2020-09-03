#include "../inc/integracaoGrafoPlano.hpp"
#include "../inc/geradoresAleatorios.hpp"

IntegracaoGrafoPlano::IntegracaoGrafoPlano(){
    for (int i = 0; i < 1600 ; i++) {
            contaminado[i] = false;
            bloqueado[i] = false;

    }

    //INICIALIZA O TESTE

    // int agente = inicioAgenteSaude(1600), infectado = inicioInfectado(1600);
    construirMapaGrafo();
    // std::thread t1 (&IntegracaoGrafoPlano::gerarContagio, this, infectado, 66);
    // std::thread t2 (&IntegracaoGrafoPlano::exameBFS, this, agente);
    std::thread t1 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1600), 66);
    std::thread t2 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1600));
    std::thread t3 (&IntegracaoGrafoPlano::loopImprime, this);

    t1.join();
    t2.join();
    t3.join();


    // std::thread t1 (&IntegracaoGrafoPlano::gerarContagio, this, infectado, 66);
    //     // this_thread::sleep_for(chrono::microseconds(1000));
    // std::thread t2 (&IntegracaoGrafoPlano::exameBFS, this, agente);
    //     // this_thread::sleep_for(chrono::microseconds(1000));
    // //  this_thread::sleep_for(chrono::seconds(2));
    // std::thread t3 (&IntegracaoGrafoPlano::loopImprime, this);

    // t3.join();
    // t1.join();
    // t2.join();

    // cout << "Inicio cocntaminado: " << infectado << endl;
    // cout << "Inicio do Agente: " << agente << endl;
    cout << "Contaminados: " << getTotalContaminados() << endl;
    cout << "Bloqueados: " << getTotalBloqueados() << endl;
    exameBFS(inicioAgenteSaude(1600));
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
        // system("clear");
        // imprimirPlano();
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
        // system("clear");
        // imprimirPlano();
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
        // system("clear");
        // imprimirPlano();
        for(i = adj[noTemp].begin(); i != adj[noTemp].end(); i++){
            if(!marcado[*i]){
                marcado[*i] = true;
                S.push(*i);
            }
            if(contaminado[noTemp] && !bloqueado[noTemp]){
                setContaminado(*i, contagio(rand()%100 + 1, chanceContagio));
            }
        }
    }
}

void IntegracaoGrafoPlano::conversorMapa(int x, int y) {

    if(getBloqueio((40*x)+y) == true){
        std::cout << "* ";
    }else{
        if ( getContaminado((40*x)+y) == true) {
            std::cout << "\x1B[31m"<< mapaXY[x][y] <<"\033[0m" << " ";
        }else {
            std::cout << mapaXY[x][y] << " ";
        }
    }
}

void IntegracaoGrafoPlano::imprimirPlano() {
    for (int i = 0; i < MAX_VALUE ; i++) {
        for (int j = 0; j < MAX_VALUE ; j++) {
            conversorMapa(i,j);

            if (j == 39) {
                std::cout << '\n';
            }
        }
    }
}

void IntegracaoGrafoPlano::loopImprime() {
    for (int i=0; i <= 100; i++){
        system("clear");
        imprimirPlano();
    }

}

int IntegracaoGrafoPlano::getTotalContaminados(){
    int n = 0;
    for(int i = 0; i < 1600; i++){
        if(contaminado[i]){
            n++;
        }
    }
    return n;
}

int IntegracaoGrafoPlano::getTotalBloqueados(){
    int n = 0;
    for(int i = 0; i < 1600; i++){
        if(bloqueado[i]){
            n++;
        }
    }
    return n;
}
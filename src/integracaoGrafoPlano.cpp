#include "../inc/integracaoGrafoPlano.hpp"
#include "../inc/geradoresAleatorios.hpp"

    void IntegracaoGrafoPlano::case1(){
        int x;
        while(true){
            cout << "Insira, em valores inteiros, a taxa de contágio (0 - 100%): ";
                std::cin >> x;
            if(x < 0 || x > 100 )
                cout << "Valor inválido!" << endl;
            else
                break;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        construirMapaGrafo();
        std::thread t1 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1600), x);
        std::thread t3 (&IntegracaoGrafoPlano::loopImprime, this);
        std::thread t2 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1600));

        t1.join();
        t2.join();
        t3.join();
    }
    void IntegracaoGrafoPlano::case2(){
        int x;
        while(true){
            cout << "Insira, em valores inteiros, a taxa de contágio (0 - 100%): ";
                std::cin >> x;
            if(x < 0 || x > 100 )
                cout << "Valor inválido!" << endl;
            else
                break;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        construirMapaGrafo();
        std::thread t1 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1600), x);
        std::thread t3 (&IntegracaoGrafoPlano::loopImprime, this);
        std::thread t21 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1600));
        std::thread t22 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1599));

        t1.join();
        t21.join();
        t22.join();
        t3.join();
    }
    void IntegracaoGrafoPlano::case3(){
        int x;
        while(true){
            cout << "Insira, em valores inteiros, a taxa de contágio (0 - 100%): ";
                std::cin >> x;
            if(x < 0 || x > 100 )
                cout << "Valor inválido!" << endl;
            else
                break;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        construirMapaGrafo();
        std::thread t1 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1600), x);
        std::thread t3 (&IntegracaoGrafoPlano::loopImprime, this);
        std::thread t21 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1600));
        std::thread t22 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1599));
        std::thread t23 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1598));

        t1.join();
        t21.join();
        t22.join();
        t23.join();
        t3.join();
    }
    void IntegracaoGrafoPlano::case4(){
        int x;
        while(true){
            cout << "Insira, em valores inteiros, a taxa de contágio (0 - 100%): ";
                std::cin >> x;
            if(x < 0 || x > 100 )
                cout << "Valor inválido!" << endl;
            else
                break;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        construirMapaGrafo();
        std::thread t1 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1600), x);
        std::thread t3 (&IntegracaoGrafoPlano::loopImprime, this);
        std::thread t21 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1600));
        std::thread t22 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1599));
        std::thread t23 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1598));
        std::thread t24 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1598));

        t1.join();
        t21.join();
        t22.join();
        t23.join();
        t24.join();
        t3.join();
    }
    void IntegracaoGrafoPlano::case5(){
        int x;
        while(true){
            cout << "Insira, em valores inteiros, a taxa de contágio (0 - 100%): ";
                std::cin >> x;
            if(x < 0 || x > 100 )
                cout << "Valor inválido!" << endl;
            else
                break;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        construirMapaGrafo();
        std::thread t11 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1600), x);
        std::thread t12 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1599), x);
        std::thread t3 (&IntegracaoGrafoPlano::loopImprime, this);
        std::thread t21 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1600));
        std::thread t22 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1599));

        t11.join();
        t12.join();
        t21.join();
        t22.join();
        t3.join();
    }
    void IntegracaoGrafoPlano::case6(){
        int x;
        while(true){
            cout << "Insira, em valores inteiros, a taxa de contágio (0 - 100%): ";
                std::cin >> x;
            if(x < 0 || x > 100 )
                cout << "Valor inválido!" << endl;
            else
                break;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        construirMapaGrafo();
        std::thread t11 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1600), x);
        std::thread t12 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1599), x);
        std::thread t13 (&IntegracaoGrafoPlano::gerarContagio, this, inicioInfectado(1598), x);
        std::thread t3 (&IntegracaoGrafoPlano::loopImprime, this);
        std::thread t21 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1600));
        std::thread t22 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1599));
        std::thread t23 (&IntegracaoGrafoPlano::exameBFS, this, inicioAgenteSaude(1598));

        t11.join();
        t12.join();
        t13.join();
        t21.join();
        t22.join();
        t23.join();
        t3.join();
    }

void IntegracaoGrafoPlano::case7(){
    int x1,y1;
    int x2,y2;
    int x3,y3;
    int x4,y4;
    int z;

    while(true){
        cout << "Insira a taxa de contágio, inteiro entre 0 e 100, do vírus em questão (0 - 100%): ";
        std::cin >> z;
        if(z < 0 || z > 100 )
            cout << "Valor inválido!" << endl;
        else
            break;
    }
    while(true){
        cout << "Sendo o mapa uma matriz (i,j) 40x40, insira a posição do primeiro infectado: " ;
        std::cin >> x1;
        std::cin >> y1;
        if(x1 < 1 || x1 > 40 || y1 < 1 || y1 > 40)
            cout << "Posição inválida!" << endl;
        else
            break;
    }

    while(true){
        cout << "Sendo o mapa uma matriz (i,j) 40x40, insira a posição do segundo infectado: " ;
        std::cin >> x2;
        std::cin >> y2;
        if(x2 < 1 || x2 > 40 || y2 < 1 || y2 > 40)
            cout << "Posição inválida!" << endl;
        else
            break;
    }
    while(true){
        cout << "Sendo o mapa uma matriz (i,j) 40x40, insira a posição do primeiro agente de saúde: ";
        std::cin >> x3;
        std::cin >> y3;
        if(x3 < 1 || x3 > 40 || y3 < 1 || y3 > 40)
            cout << "Posição inválida!" << endl;
        else
            break;
    }

    while(true){
        cout << "Sendo o mapa uma matriz (i,j) 40x40, insira a posição do segundo agente de saúde: ";
        std::cin >> x4;
        std::cin >> y4;
        if(x4 < 1 || x4 > 40 || y4 < 1 || y4 > 40)
            cout << "Posição inválida!" << endl;
        else
            break;
    }

    construirMapaGrafo();
    std::thread t11 (&IntegracaoGrafoPlano::gerarContagio, this, ((x1-1)*40+y1-1), z);
    std::thread t12 (&IntegracaoGrafoPlano::gerarContagio, this, ((x2-1)*40+y2-1), z);
    std::thread t21 (&IntegracaoGrafoPlano::exameBFS, this, ((x3-1)*40+y3-1));
    std::thread t22 (&IntegracaoGrafoPlano::exameBFS, this, ((x4-1)*40+y4-1));
    std::thread t3 (&IntegracaoGrafoPlano::loopImprime, this);

    t11.join();
    t12.join();
    t21.join();
    t22.join();
    t3.join();

}
IntegracaoGrafoPlano::IntegracaoGrafoPlano(){
    for (int i = 0; i < MAX_NO ; i++) {
            contaminado[i] = false;
            bloqueado[i] = false;

    }
}
/*####################### estatisticas ############################*/
    // cout << "Contaminados: " << getTotalContaminados() << endl;
    // cout << "Bloqueados: " << getTotalBloqueados() << endl;



IntegracaoGrafoPlano::~IntegracaoGrafoPlano() {
    	delete contaminado;
        delete bloqueado;
        delete agente;
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

    for (int i=0; i < 39; i++) {
        // linha superior
        addEdge((i),i+1);
        addEdge((i), (40+i)); //liga topo ao centro
        //addEdge((i+1),i);
        // coluna esquerda
        addEdge((40*i),(40*(i+1)));
        addEdge((40*i), (40*i+1)); //liga col esquerda ao centro
        // addEdge((40*(i+1)),(40*i));
        // coluna direita
        addEdge((40*(i+1)-1),((40*(i+2))-1));
        addEdge((40*(i+1)-1), (40*(i+1)-2));//liga col direita ao centro
        // addEdge(((40*(i+2))-1),((40*i+1)-1));
        // linha inferior
        addEdge( (1560+i), (1560+(i+1)) );
        addEdge((1560+i), (1560-40+i));//liga o de baixo ao centro
        // addEdge( (1560+(i+1)), ( 1560+i ));
    }

    // ligar ultimo nó
       addEdge(1599, 1598);
       addEdge(1599, 1597);
       addEdge(1599, 1558);
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
    std::this_thread::sleep_for (std::chrono::milliseconds(1));
    queue<int> S;
    bool marcado[MAX_NO];
    int noTemp;

    for(int i = 0; i < MAX_NO; i++)
        marcado[i] = false;

    S.push(inicial);
    marcado[inicial] = true;
    agente[inicial] = true;

    while(!S.empty()){
        list<int>::iterator i;
        noTemp = S.front();
        S.pop();

        // cout << "exame: " << noTemp << endl;
        std::this_thread::sleep_for (std::chrono::microseconds(1));
        // system("clear");
        // imprimirPlano();
        for(i = adj[noTemp].begin(); i != adj[noTemp].end(); i++){
            if(!marcado[*i]){
                marcado[*i] = true;
                S.push(*i);
            }
            bloqueado[*i] = true;
            // if(contaminado[*i]) break;
        }
    }
}
void IntegracaoGrafoPlano::exameDFS(int inicial){
    std::this_thread::sleep_for (std::chrono::milliseconds(1));
    stack<int> S;
    bool marcado[MAX_NO];
    int noTemp;

    for(int i = 0; i < MAX_NO; i++)
        marcado[i] = false;

    S.push(inicial);
    marcado[inicial] = true;

    while(!S.empty()){
        list<int>::iterator i;
        noTemp = S.top();
        S.pop();
        std::this_thread::sleep_for (std::chrono::microseconds(1));
        // cout << "exame: " << noTemp << endl;

        for(i = adj[noTemp].begin(); i != adj[noTemp].end(); i++){
            if(!marcado[*i]){
                marcado[*i] = true;
                S.push(*i);
            }
            bloqueado[*i] = true;

            if(contaminado[*i]) break;
        }
    }
}

void IntegracaoGrafoPlano::gerarContagio(int inicial, int chanceContagio){
    std::this_thread::sleep_for (std::chrono::milliseconds(5));
    queue<int> S;
    srand((unsigned) time(0));
    bool marcado[MAX_NO];
    int noTemp;

    for(int i = 0; i < MAX_NO; i++)
        marcado[i] = false;

    S.push(inicial);
    marcado[inicial] = true;
    contaminado[inicial] = true;
    // cout << "contaminado: " << noTemp << endl;
    while(!S.empty()){
        list<int>::iterator i;
        noTemp = S.front();
        S.pop();

        // if(contaminado[noTemp]){
        //     contaminado[*i] = true;
        // }
        std::this_thread::sleep_for (std::chrono::microseconds(1));
        for(i = adj[noTemp].begin(); i != adj[noTemp].end(); i++){

            if(!marcado[*i]){
                marcado[*i] = true;
                S.push(*i);
            }
            if(contaminado[noTemp] && !bloqueado[*i]){
                setContaminado(*i, contagio(rand()%100 + 1, chanceContagio));
            }
        }
    }
}

string IntegracaoGrafoPlano::conversorMapa(int x, int y) {
    string tempMapa;
    // if(getBloqueio((40*x)+y) == true){
    //     std::cout << "* ";
    // }else{
    //     if ( getContaminado((40*x)+y) == true) {
    //         std::cout << "\x1B[31m"<< mapaXY[x][y] <<"\033[0m" << " ";
    //     }else {
    //         std::cout << mapaXY[x][y] << " ";
    //     }
    // }

    // bloqueado bota asterisco com azul
    if(agente[40*x+y]){
        tempMapa = tempMapa + "\x1B[34mA\033[0m ";
    }else if(getBloqueio((40*x)+y) && getContaminado((40*x)+y)){
    // if(getBloqueio((40*x)+y)){
        tempMapa = tempMapa + "\x1B[34m*\033[0m ";
    }else{
        if ( getContaminado((40*x)+y) == true) {
            tempMapa = tempMapa + "\x1B[31m" + std::to_string(mapaXY[x][y]) + "\033[0m" + " ";
        }else {
            tempMapa = tempMapa + std::to_string(mapaXY[x][y]) + " ";
        }
    }

    return tempMapa;
}

string IntegracaoGrafoPlano::imprimirPlano() {
    string tempMapa;

    for (int i = 0; i < MAX_VALUE ; i++) {
        for (int j = 0; j < MAX_VALUE ; j++) {
            tempMapa = tempMapa + conversorMapa(i,j);

            if (j == 39) {
                tempMapa = tempMapa + '\n';
            }
        }
    }

    return tempMapa;
}

void IntegracaoGrafoPlano::loopImprime() {
    list<string> planos;


    int interacaoContador{0};


    for (int i=0; i <= 150; i++){
        // clearScreen();
       planos.push_back(imprimirPlano());
    }

    for (list<string>::iterator it=planos.begin();it != planos.end(); ++it){

       clearScreen();

        ++interacaoContador;

       cout << '\n' << *it ;

       if( interacaoContador != 151) {
        cout << "Press Enter to Continue | Iterações: " << interacaoContador << "/150 "<< endl;
        cin.ignore();
       }


    }

    // cout << "\nTotal de infectados: " << getTotalContaminados();
    cout << "\nTotal de infectados/bloqueados: " << getTotalBloqueados() << "\n\n";

}

int IntegracaoGrafoPlano::getTotalContaminados(){
    int n = 0;
    for(int i = 0; i < MAX_NO; i++){
        if(contaminado[i]){
            n++;
        }
    }
    return n;
}

int IntegracaoGrafoPlano::getTotalBloqueados(){
    int n = 0;
    for(int i = 0; i < MAX_NO; i++){
        if(bloqueado[i] && contaminado[i]){
            n++;
        }
    }
    return n;
}

void IntegracaoGrafoPlano::clearScreen() {
    cout << string( 50, '\n' );
    }

void IntegracaoGrafoPlano::limparMapa() {
    for (int i = 0; i < MAX_NO ; i++) {
            contaminado[i] = false;
            bloqueado[i] = false;
            agente[i] = false;

    }


}

#include <iostream>
#include <thread>
#include <chrono>
#include "../inc/plano2D.hpp"
#include "../inc/grafo.hpp"
#include "../inc/geradoresAleatorios.hpp"
#include "../inc/integracaoGrafoPlano.hpp"


int main(){

    int menu{};
    int valor_no{};
    bool valor_status{};

     IntegracaoGrafoPlano teste;


     // coloque false para testar as buscas nos nós
    while (true) {

        std::cout << "Escolha a configuração da simulação: " << '\n';
        std::cout << "1. 1 contaminado e 1 agente de saúde" << '\n';
        std::cout << "2. 1 contaminado e 2 agentes de saúde " << '\n';
        std::cout << "3. 1 contaminado e 3 agentes de saúde" << '\n';
        std::cout << "4. 1 contaminado e 4 agentes de saúde" << '\n';
        std::cout << "5. 2 contaminados e 2 agentes de saúde" << '\n';
        std::cout << "6. 3 contaminados e 3 agentes de saúde" << '\n';
        
        std::cout << "7. Posicionar 2 contaminados e 2 agentes de saúde" << '\n';

        std::cout << "0. Sair" << '\n';

        std::cin >> menu;

        system("clear");
        
        IntegracaoGrafoPlano();

        switch (menu) {
            case 1 :
                teste.case1();
                break;
            case 2 :
                teste.case2();
                break;
            case 3 :
                teste.case3();
                break;
            case 4:
                teste.case4();
                break;
            case 5:
                teste.case5();
                break;
            case 6:
                teste.case6();
                break;
            case 7:
                teste.case7();
                break;
            case 0 :
                return 0;
                break;
            default:
                std::cout << "Escolha invalida!" << '\n';
                break;
        }
    }

	return 0;

}

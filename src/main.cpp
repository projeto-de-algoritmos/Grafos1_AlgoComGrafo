#include <iostream>
#include "../inc/plano2D.hpp"
#include "../inc/grafo.hpp"
#include "../inc/geradoresAleatorios.hpp"


int main(){

    int menu{};
    int valor_no{};
    bool valor_status{};

     Plano2D planoInicial;

    //  planoInicial.gerarTeste();

     planoInicial.construirMapaGrafo();
     planoInicial.gerarContagio(inicioInfectado(1600), 75);
     planoInicial.imprimirPlano();
     planoInicial.exameDFS(inicioAgenteSaude(1600));
     planoInicial.imprimirPlano();

     // coloque false para testar as buscas nos nós
     while (false) {

         //TODO Melhorar a UI

        std::cout << "Escolha uma opção: " << '\n';
        std::cout << "1. Imprimir plano" << '\n';
        std::cout << "2. Colocar infectado " << '\n';
        std::cout << "3. Colocar bloqueio " << '\n';
        std::cout << "0. Sair " << '\n';

        std::cin >> menu;

        system("clear");

        switch (menu) {
            case 1 :
                planoInicial.imprimirPlano();
                break;
            case 2 :
                std::cout << "Escolha o no: "; std::cin >> valor_no;
                std::cout << "Escolha o status: "; std::cin >> valor_status;
                planoInicial.setContaminado(valor_no, valor_status);
                break;
            case 3 :
                std::cout << "Escolha o no: "; std::cin >> valor_no;
                std::cout << "Escolha o status: "; std::cin >> valor_status;
                planoInicial.setBloqueio(valor_no, valor_status);
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

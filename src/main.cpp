#include <iostream>
#include "../inc/plano2D.hpp"
#include "../inc/grafo.hpp"
#include "../inc/geradoresAleatorios.hpp"


int main(){

    int menu{};
    int posX{};
    int posY{};
    int valor{};

     Plano2D planoInicial;

     planoInicial.gerarPlano();

     while (true) {

         //TODO Melhorar a UI

        std::cout << "Escolha uma opção: " << '\n';
        std::cout << "1. Imprimir plano" << '\n';
        std::cout << "2. Colocar valor " << '\n';
        std::cout << "0. Sair " << '\n';

        std::cin >> menu;

        system("clear");

        switch (menu) {
            case 1 :
                planoInicial.imprimirPlano();
                break;
            case 2 :
                std::cout << "Escolha x: "; std::cin >> posX;
                std::cout << "Escolha y: "; std::cin >> posY;
                std::cout << "Escolha valor: "; std::cin >> valor;
                planoInicial.set_mapaXY(posX,posY,valor);
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

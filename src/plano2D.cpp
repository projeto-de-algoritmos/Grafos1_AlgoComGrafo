#include "../inc/plano2D.hpp"


Plano2D::Plano2D() {
    for (int i = 0; i<=MAX_VALUE ; i++) {
        for (int j = 0; j<=MAX_VALUE ; j++) {
            mapaXY[i][j] = 0;
        }
    }
}

Plano2D::~Plano2D() {
    std::cout << "Plane destroyed" << '\n';
}

int Plano2D::get_mapaXY(int i, int j) {
    return mapaXY[i][j];
}

void Plano2D::set_mapaXY(int i, int j, int value) {
    mapaXY[i][j] = value;
}

// Na geração do plano o num "1" é o infectado e num "2" é o agente.
void Plano2D::gerarPlano() {
    mapaXY[10][10] = 1;
    mapaXY[35][35] = 2;
}

void Plano2D::imprimirPlano() {
    for (int i = 0; i<=MAX_VALUE ; i++) {
        for (int j = 0; j<=MAX_VALUE ; j++) {
            std::cout << mapaXY[i][j] << " ";

            if (j == MAX_VALUE) {
                std::cout << '\n';
            }
        }
    }
}

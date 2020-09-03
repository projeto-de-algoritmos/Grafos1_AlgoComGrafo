#include "../inc/plano2D.hpp"



Plano2D::Plano2D() {
    for (int i = 0; i < MAX_VALUE ; i++) {
        for (int j = 0; j < MAX_VALUE ; j++) {
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



// void Plano2D::conversorMapa(int x, int y) {

//     if ( getContaminado((40*x)+y) == true) {
//         std::cout << "\x1B[31m"<< mapaXY[x][y] <<"\033[0m" << " ";
//     } else {
//         if ( getBloqueio((40*x)+y) == true) {
//             std::cout << "| ";
//     }   else {
//             std::cout << mapaXY[x][y] << " ";
//         }
//     }
// }

#include <iostream>
#include <cstdlib>
#include "sculptor.h"

int main() {

    // Criando um objeto Sculptor
    Sculptor sculptor(50, 50, 50);

    // Definindo a cor
    sculptor.setColor(255, 0, 0, 255); // Vermelho

    // Criando uma circunferência
    sculptor.putSphere(5, 5, 5, 4);
    sculptor.cutSphere(3, 5, 5, 2);

    // Definindo uma nova cor
    sculptor.setColor(0, 255, 0, 255); // Verde

    // Criando um quadrado
    sculptor.putBox(20, 27, 20, 27, 20, 27);
    sculptor.cutBox(18, 25, 18, 25, 18, 25);

    // Definindo outra cor
    sculptor.setColor(0, 0, 255, 255); // Azul

    // Criando uma elipsoide
    sculptor.putEllipsoid(38, 38, 38, 5, 7, 5);
    sculptor.cutEllipsoid(36, 38, 38, 3, 5, 3);

    // Escrevendo o arquivo OFF
    sculptor.writeOFF("todas.off");

    return 0;
}

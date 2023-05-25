#include <iostream>
#include <cstdlib>
#include "sculptor.h"

int main() {
    //Criei o sculptor s
    Sculptor s(50,50,50);
    //Defini a cor preta
    s.setColor(0,0,0,255);
    // Criei a base da estatua com dois niveis
    s.putBox(15,36,15,36,0,1);
    s.putBox(20,31,20,31,2,8);
    // Defini a cor dourada
    s.setColor(212,175,55,255);
    s.putBox(20,31,20,31,9,10);
    // Criei o corpo da estatua
    s.putBox(25,26,24,27,11,30);
    //peito
    s.putBox(24,24,24,27,27,30);
    //braços
    s.putBox(23,26,23,23,27,30);
    s.putBox(23,26,28,28,27,30);
    s.putBox(23,23,24,27,27,28);
    //cabeça
    s.putBox(25,26,25,26,31,33);
    //Criei os pés da estatua
    s.putBox(23,24,24,27,11,12);


    // Escrevi o arquivo off
    s.writeOFF("oscar.off");

}
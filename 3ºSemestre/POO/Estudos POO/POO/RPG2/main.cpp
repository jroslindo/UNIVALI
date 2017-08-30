#include <iostream>

using namespace std;

#include "personagem.h"
#include "guerreiro.h"
#include "mago.h"

int main()
{
    Mago p1("Joao","Joaquin Silva");
    Guerreiro p2("Pedro","Jose Rocha");

    p1.setForca(10);
    //p2.setForca(15);
    //p1.setInteligencia(15);
    p2.setInteligencia(10);

    p1.setNomeArma("Cajado");
    p1.setDanoArma(8);

    p2.setNomeArma("Espada");
    p2.setDanoArma(7);

    p1.imprimirMago();
    p2.imprimirGuerreiro();
}

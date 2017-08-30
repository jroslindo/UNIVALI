#include "priest.h"

Priest::Priest()
{

}

void Priest::realizarCura(Personagem &p){

    p.setVida(p.getNivel() * 5 + p.getVida());
    p.setMana(p.getMana() - 10);

}

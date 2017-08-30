#include "arqueiro.h"

Arqueiro::Arqueiro()
{

}

void Arqueiro::vigor(Personagem &p){

    p.setAgilidade(p.getAgilidade() + 0.7 * p.getNivel());
    p.setMana(p.getMana() - 7);

}

#include "assassino.h"

Assassino::Assassino()
{

}

void Assassino::esquivar(Personagem &p){

    p.setMana(p.getMana() -1);

}

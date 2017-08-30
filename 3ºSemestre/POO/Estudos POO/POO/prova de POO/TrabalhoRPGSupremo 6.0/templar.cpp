#include "templar.h"

Templar::Templar()
{

}

void Templar::realizarTaunt(Personagem &p){

     p.setDefArmadura(p.getNivel() * 0.5 + p.getDefArmadura());
     p.setMana(p.getMana() - 6);

}

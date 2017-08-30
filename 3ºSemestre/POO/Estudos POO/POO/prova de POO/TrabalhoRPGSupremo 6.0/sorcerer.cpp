#include "sorcerer.h"

Sorcerer::Sorcerer()
{

}

void Sorcerer::concentrar(Personagem &p){

    p.setInteligencia(p.getInteligencia() + 0.5 * p.getNivel());
    p.setMana(p.getMana() - 15);
}

#include "berserker.h"

Berserker::Berserker()
{

}

void Berserker::ativarFuria(Personagem &p){

    p.setDanoArma(p.getNivel() * 0.5 + p.getDanoArma());
    p.setMana(p.getMana() - 6);

}

#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include "personagem.h"

class Arqueiro :public Personagem
{

public:
    Arqueiro();

    void imprimeStatus ();
    void causaDano(Monstro &m);
    void causaDano(Monstro &m, int danoSkill);
    void levarDano(int dano);

};

#endif // ARQUEIRO_H

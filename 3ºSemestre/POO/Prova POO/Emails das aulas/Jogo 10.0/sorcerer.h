#ifndef SORCERER_H
#define SORCERER_H
#include "personagem.h"

class Sorcerer :public Personagem
{

public:
    Sorcerer();

    void imprimeStatus();
    void causaDano(Monstro &m);
    void causaDano(Monstro &m, int danoSkill);
    void levarDano(int dano);
};

#endif // SORCERER_H

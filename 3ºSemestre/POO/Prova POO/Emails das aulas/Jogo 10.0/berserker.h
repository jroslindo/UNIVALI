#ifndef BERSERKER_H
#define BERSERKER_H

#include<iostream>
using namespace std;
#include "personagem.h"

class Berserker :public Personagem
{
public:
    Berserker();

    void imprimeStatus();
    void causaDano(Monstro &m);
    void causaDano(Monstro &m, int danoSkill);
    void levarDano(int dano);

};

#endif // BERSERKER_H

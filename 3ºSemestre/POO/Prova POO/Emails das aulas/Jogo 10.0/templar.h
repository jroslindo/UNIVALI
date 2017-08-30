#ifndef TEMPLAR_H
#define TEMPLAR_H
#include<iostream>
using namespace std;

#include "personagem.h"

class Templar :public Personagem
{

public:
    Templar();

    void imprimeStatus();
    void causaDano(Monstro &m);
    void causaDano(Monstro &m, int danoSkill);
    void levarDano(int dano);
};

#endif // TEMPLAR_H

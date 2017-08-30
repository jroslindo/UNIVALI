#ifndef ASSASSINO_H
#define ASSASSINO_H
#include "personagem.h"

class Assassino :public Personagem
{

public:
    Assassino();

   void imprimeStatus();
   void causaDano(Monstro &m);
   void causaDano(Monstro &m, int danoSkill);
   void levarDano(int dano);

};

#endif // ASSASSINO_H

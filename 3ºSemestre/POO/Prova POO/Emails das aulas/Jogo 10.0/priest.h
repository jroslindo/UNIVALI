#ifndef PRIEST_H
#define PRIEST_H
#include "personagem.h"

class Priest :public Personagem
{
public:
    Priest();

   void imprimeStatus();
   void causaDano(Monstro &m);
   void causaDano(Monstro &m, int danoSkill);
   void levarDano(int dano);
};

#endif // PRIEST_H

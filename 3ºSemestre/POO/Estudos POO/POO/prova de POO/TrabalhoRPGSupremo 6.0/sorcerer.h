#ifndef SORCERER_H
#define SORCERER_H
#include "personagem.h"

class Sorcerer :public Personagem
{
public:
    Sorcerer();

    void concentrar(Personagem &p);
};

#endif // SORCERER_H

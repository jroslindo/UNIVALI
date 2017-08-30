#ifndef ASSASSINO_H
#define ASSASSINO_H
#include "personagem.h"

class Assassino :public Personagem
{
public:
    Assassino();

    void esquivar(Personagem &p);
};

#endif // ASSASSINO_H

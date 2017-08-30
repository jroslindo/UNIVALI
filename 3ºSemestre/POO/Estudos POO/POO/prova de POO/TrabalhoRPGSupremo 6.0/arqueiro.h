#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include "personagem.h"

class Arqueiro :public Personagem
{
public:
    Arqueiro();

    void vigor(Personagem &p);
};

#endif // ARQUEIRO_H

#ifndef PRIEST_H
#define PRIEST_H
#include "personagem.h"

class Priest :public Personagem
{
public:
    Priest();

    void realizarCura(Personagem &p);
};

#endif // PRIEST_H


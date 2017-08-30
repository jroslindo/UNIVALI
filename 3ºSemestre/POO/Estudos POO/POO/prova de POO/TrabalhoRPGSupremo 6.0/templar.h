#ifndef TEMPLAR_H
#define TEMPLAR_H
#include "personagem.h"

class Templar : public Personagem
{
public:
    Templar();
    void realizarTaunt(Personagem &p);

};

#endif // TEMPLAR_H

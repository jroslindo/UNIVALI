#ifndef BERSERKER_H
#define BERSERKER_H
#include "personagem.h"


class Berserker :public Personagem
{
public:
    Berserker();
    void ativarFuria(Personagem &p);
};

#endif // BERSERKER_H

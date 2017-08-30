#ifndef MONSTRO_H
#define MONSTRO_H
#include <iostream>
using namespace std;
#include "personagem.h"

class Monstro
{
private:
    string nome;
    float vida;
    float defesa;
    float ataque;

public:
    Monstro(string nome, float defesa, float ataque, float vida);

    void levarDanoComoMonstro(int dano);
    void causarDanoComoMonstro(Personagem &p, float dano);


    float getDefesa() const;
    void setDefesa(float value);
    float getAtaque() const;
    void setAtaque(float value);
    float getVida() const;
    void setVida(float value);
};

#endif // MONSTRO_H

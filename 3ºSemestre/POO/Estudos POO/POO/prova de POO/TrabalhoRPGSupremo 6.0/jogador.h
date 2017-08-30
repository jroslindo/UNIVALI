#ifndef JOGADOR_H
#define JOGADOR_H
#include "templar.h"
#include "sorcerer.h"
#include "priest.h"
#include "berserker.h"
#include "arqueiro.h"
#include "assassino.h"

class Jogador  :public Templar, public Sorcerer, public Berserker, public Priest,public Arqueiro, public Assassino
{
public:
    Jogador();

    void teste(Personagem &p,string nome, string classe, int nivel, int experiencia, float vida, float mana, float forca, float inteligencia,
               float agilidade, string nomeArma, float danoArma, string nomeArmadura, float defArmadura);

};

#endif // JOGADOR_H

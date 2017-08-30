#include "monstro.h"

int Monstro::getDano() const
{
    return dano;
}

void Monstro::setDano(int value)
{
    dano = value;
}

Monstro::Monstro(string nome, int vida, int dano, int defesa)
{
    this ->nome = nome;
    this ->vida = vida;
    this ->dano = dano;
    this ->defesa = defesa;
}


Monstro::~Monstro()
{

}


int Monstro::getDefesa() const
{
    return defesa;
}

void Monstro::setDefesa(int value)
{
    defesa = value;
}

int Monstro::getVida() const
{
    return vida;
}

void Monstro::setVida(int value)
{
    vida = value;
}



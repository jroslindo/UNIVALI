#include "monstro.h"
#include <iostream>
string Monstro::getNome() const
{
    return nome;
}

void Monstro::setNome(const string &value)
{
    nome = value;
}

int Monstro::getVida() const
{
    return vida;
}

void Monstro::setVida(int value)
{
    vida = value;
}

int Monstro::getDano() const
{
    return dano;
}

void Monstro::setDano(int value)
{
    dano = value;
}

Monstro::Monstro()
{

}

Monstro::Monstro(string nome, int vida, int dano)
{
    this -> nome = nome;
    this -> vida = vida;
    this -> dano = dano;
}

Monstro::~Monstro()
{

}

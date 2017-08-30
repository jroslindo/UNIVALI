#include "monstro.h"

float Monstro::getDefesa() const
{
    return defesa;
}

void Monstro::setDefesa(float value)
{
    defesa = value;
}

float Monstro::getAtaque() const
{
    return ataque;
}

void Monstro::setAtaque(float value)
{
    ataque = value;
}

float Monstro::getVida() const
{
    return vida;
}

void Monstro::setVida(float value)
{
    vida = value;
}

Monstro::Monstro(string nome, float defesa, float ataque, float vida)
    :nome(nome), defesa(defesa), ataque(ataque), vida(vida)
{

}


void Monstro::levarDanoComoMonstro(int dano){
    vida-=dano;
}

void Monstro::causarDanoComoMonstro(Personagem &p, float dano){

    p.setVida(p.getVida() - dano);

}

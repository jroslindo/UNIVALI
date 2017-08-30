#include "personagem.h"

int Personagem::quantidadePersonagens=0; // zerando quantidade de personagens

string Personagem::getNome() const
{
    return nome;
}

void Personagem::setNome(const string &value)
{
    nome = value;
}

int Personagem::getQuantidadePersonagens()
{
    return quantidadePersonagens;
}

void Personagem::setQuantidadePersonagens(int value)
{
    quantidadePersonagens = value;
}

int Personagem::getVida() const
{
    return vida;
}

void Personagem::setVida(int value)
{
    vida = value;
}

int Personagem::getNivel() const
{
    return nivel;
}

void Personagem::setNivel(int value)
{
    nivel = value;
}

string Personagem::getClasse() const
{
    return classe;
}

void Personagem::setClasse(const string &value)
{
    classe = value;
}

int Personagem::getMana() const
{
    return mana;
}

void Personagem::setMana(int value)
{
    mana = value;
}

int Personagem::getForca() const
{
    return forca;
}

void Personagem::setForca(int value)
{
    forca = value;
}

int Personagem::getInteligencia() const
{
    return inteligencia;
}

void Personagem::setInteligencia(int value)
{
    inteligencia = value;
}

int Personagem::getAgilidade() const
{
    return agilidade;
}

void Personagem::setAgilidade(int value)
{
    agilidade = value;
}

int Personagem::getDefesa() const
{
    return defesa;
}

void Personagem::setDefesa(int value)
{
    defesa = value;
}

int Personagem::getDano() const
{
    return dano;
}

void Personagem::setDano(int value)
{
    dano = value;
}

Personagem::Personagem()
{

}

Personagem::~Personagem()
{

}


void Personagem::causaDano(Monstro &m){

}

void Personagem::causaDano(Monstro &m, int danoSkill){

}

void Personagem::levarDano(int dano){

}

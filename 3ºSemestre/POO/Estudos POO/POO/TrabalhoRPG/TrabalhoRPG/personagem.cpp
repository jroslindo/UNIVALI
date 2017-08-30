#include "personagem.h"

string Personagem::getNome() const
{
    return nome;
}

void Personagem::setNome(const string &value)
{
    nome = value;
}

string Personagem::getPersonagem() const
{
    return personagem;
}

void Personagem::setPersonagem(const string &value)
{
    personagem = value;
}

int Personagem::getNivel() const
{
    return nivel;
}

void Personagem::setNivel(int value)
{
    nivel = value;
}

int Personagem::getExperiencia() const
{
    return experiencia;
}

void Personagem::setExperiencia(int value)
{
    experiencia = value;
}

int Personagem::getVida() const
{
    return vida;
}

void Personagem::setVida(int value)
{
    vida = value;
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

Personagem::Personagem()
{

}

#include "personagem.h"

string Personagem::getNome() const
{
    return nome;
}

void Personagem::setNome(const string &value)
{
    nome = value;
}

Personagem::Personagem()
{

}

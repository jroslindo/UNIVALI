#include "jogador.h"


int Jogador::getCamisa() const
{
    return camisa;
}

void Jogador::setCamisa(int value)
{
    camisa = value;
}

string Jogador::getNome() const
{
    return nome;
}

void Jogador::setNome(const string &value)
{
    nome = value;
}
Jogador::Jogador()
{

}


#include "monstro.h"

Monstro::Monstro(string nome){
    this->nome = nome;
}

Monstro::Monstro(string nome, int vida, int dano){
    this->nome = nome;
    this->vida = vida;
    this->dano = dano;
}

Monstro::~Monstro(){
    cout<<"\nMonstro "<<nome<<" foi desalocado da memoria!!!";
}
void Monstro::levarDano(int dano){
    this->vida -= dano;
}



int Monstro::getDano() const
{
    return dano;
}

void Monstro::setDano(int value)
{
    dano = value;
}

int Monstro::getVida() const
{
    return vida;
}

void Monstro::setVida(int value)
{
    vida = value;
}
string Monstro::getNome() const
{
    return nome;
}

void Monstro::setNome(const string &value)
{
    nome = value;
}
void Monstro::imprimir(){
    cout<<"\n---------------------------";
    cout<<"\nNome:\t"<<nome;
    cout<<"\Vida:\t"<<vida;
    cout<<"\nDano:\t"<<dano;
    cout<<"\n---------------------------";
}

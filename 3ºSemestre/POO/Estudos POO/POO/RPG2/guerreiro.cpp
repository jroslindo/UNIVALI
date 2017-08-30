#include "guerreiro.h"

int Guerreiro::getDanoArma() const
{
    return danoArma;
}

void Guerreiro::setDanoArma(int value)
{
    danoArma = value;
}

string Guerreiro::getNomeArma() const
{
    return nomeArma;
}

void Guerreiro::setNomeArma(const string &value)
{
    nomeArma = value;
}

Guerreiro::Guerreiro(string nome, string jogador)
    : Personagem(nome,jogador) //<- SUPER CLASSE
{
    setVida(100);
    setForca(20);
}

void Guerreiro::baterComoGuerreiro(Personagem &p){
    p.levardano(getForca() + danoArma);
}

void Guerreiro::imprimirGuerreiro(){
    imprimir();
    cout <<"\nArma: "<<nomeArma<<"("<<danoArma<<")";
    cout <<"\n-----------------------------------";
}

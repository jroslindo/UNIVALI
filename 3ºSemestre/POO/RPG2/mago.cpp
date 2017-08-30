#include "mago.h"

int Mago::getDanoArma() const
{
    return danoArma;
}

void Mago::setDanoArma(int value)
{
    danoArma = value;
}

string Mago::getNomeArma() const
{
    return nomeArma;
}

void Mago::setNomeArma(const string &value)
{
    nomeArma = value;
}

Mago::Mago(string nome, string jogador)
    : Personagem(nome,jogador)
{
    setVida(50);
    setInteligencia(20);
}

void Mago::imprimirMago(){
    imprimir();
    cout <<"\nArma: "<<nomeArma<<"("<<danoArma<<")";
    cout <<"\n-----------------------------------";
}

void Mago::baterComoMago(Personagem &p){

     p.levardano(getInteligencia() + danoArma);

}

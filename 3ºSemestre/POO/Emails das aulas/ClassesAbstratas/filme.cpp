#include "filme.h"

void Filme::imprimir(){
    cout<<"\n-------FILME-------";
    cout<<"\nTitulo: "<<getTitulo();
    cout<<"\nDiretor: "<<getAutor();
    cout<<"\nTipo: "<<getTipo();
    cout<<"\nDuracao: "<<getDuracao()<<" minutos";
    cout<<"\nPrincipais atores: "<<getAtores();
    cout<<"\n-------------------";
    cout<<"\n";
}

string Filme::getAtores() const
{
    return atores;
}

void Filme::setAtores(const string &value)
{
    atores = value;
}

string Filme::getTipo() const
{
    return tipo;
}

void Filme::setTipo(const string &value)
{
    tipo = value;
}

int Filme::getDuracao() const
{
    return duracao;
}

void Filme::setDuracao(int value)
{
    duracao = value;
}

string Filme::getMidia() const
{
    return midia;
}

void Filme::setMidia(const string &value)
{
    midia = value;
}
Filme::Filme()
{

}


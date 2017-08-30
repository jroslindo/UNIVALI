#include "filmes.h"

string Filmes::getAtores() const
{
    return atores;
}

void Filmes::setAtores(const string &value)
{
    atores = value;
}

string Filmes::getTipo() const
{
    return tipo;
}

void Filmes::setTipo(const string &value)
{
    tipo = value;
}

int Filmes::getDuracao() const
{
    return duracao;
}

void Filmes::setDuracao(int value)
{
    duracao = value;
}

string Filmes::getMidia() const
{
    return midia;
}

void Filmes::setMidia(const string &value)
{
    midia = value;
}

Filmes::Filmes()
{

}

void Filmes::imprimir(){

    cout<<"\n------------------FILME---------------------";
    cout<<"\nTitulo: "<<getTitulo();
    cout<<"\nDiretor: "<<getAutor();
    cout<<"\nTipo: "<<getTipo();
    cout<<"\nDuracao: "<<getDuracao();
    cout<<"\nPrincipais Atores: "<<getAtores();
    cout<<"\n--------------------------------------------";
    cout<<"\n";

}

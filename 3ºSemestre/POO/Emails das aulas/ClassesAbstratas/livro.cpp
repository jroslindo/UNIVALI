#include "livro.h"

void Livro::imprimir(){
    cout<<"\n-------LIVRO-------";
    cout<<"\nTitulo: "<<getTitulo();
    cout<<"\nAutor: "<<getAutor();
    cout<<"\nEditora: "<<getEditora();
    cout<<"\n#Paginas: "<<getNroPaginas();
    cout<<"\nTema: "<<getTema();
    cout<<"\n-------------------";
    cout<<"\n";
}


int Livro::getNroPaginas() const
{
    return nroPaginas;
}

void Livro::setNroPaginas(int value)
{
    nroPaginas = value;
}

string Livro::getEditora() const
{
    return editora;
}

void Livro::setEditora(const string &value)
{
    editora = value;
}

int Livro::getAno() const
{
    return ano;
}

void Livro::setAno(int value)
{
    ano = value;
}

string Livro::getTema() const
{
    return tema;
}

void Livro::setTema(const string &value)
{
    tema = value;
}
Livro::Livro()
{

}


#include "livro.h"

int Livro::getNumPaginas() const
{
    return numPaginas;
}

void Livro::setNumPaginas(int value)
{
    numPaginas = value;
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

void Livro::imprimir(){

    cout<<"\n------------------LIVRO----------------------";
    cout<<"\nTitulo: "<<getTitulo();
    cout<<"\nAutor: "<<getAutor();
    cout<<"\nEditora: "<<getEditora();
    cout<<"\nNumero de Paginas: "<<getNumPaginas();
    cout<<"\nTema: "<<getTema();
    cout<<"\n---------------------------------------------";
    cout<<"\n";

}

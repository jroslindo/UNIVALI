#include "obra.h"

int Obra::getCodigo() const
{
    return codigo;
}

void Obra::setCodigo(int value)
{
    codigo = value;
}

string Obra::getTitulo() const
{
    return titulo;
}

void Obra::setTitulo(const string &value)
{
    titulo = value;
}

string Obra::getAutor() const
{
    return autor;
}

void Obra::setAutor(const string &value)
{
    autor = value;
}

Obra::Obra()
{

}

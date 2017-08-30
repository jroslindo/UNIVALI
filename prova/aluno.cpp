#include "aluno.h"
#include <iostream>

int Aluno::getCodigo() const
{
    return codigo;
}

void Aluno::setCodigo(int value)
{
    codigo = value;
}

string Aluno::getNome() const
{
    return nome;
}

void Aluno::setNome(const string &value)
{
    nome = value;
}

Aluno::Aluno()
{

}

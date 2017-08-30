#include "pessoa.h"


string Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const string &value)
{
    nome = value;
}

string Pessoa::getCpf() const
{
    return cpf;
}

void Pessoa::setCpf(const string &value)
{
    cpf = value;
}

int Pessoa::getIdade() const
{
    return idade;
}

void Pessoa::setIdade(int value)
{
    idade = value;
}
Pessoa::Pessoa()
{

}


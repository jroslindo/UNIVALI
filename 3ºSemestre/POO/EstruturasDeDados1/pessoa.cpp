#include "pessoa.h"

string Pessoa::getCpf() const
{
    return cpf;
}

void Pessoa::setCpf(const string &value)
{
    cpf = value;
}

string Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const string &value)
{
    nome = value;
}

Pessoa::Pessoa()
{

}

Pessoa::Pessoa(string cpf)
{
    this->cpf = cpf;
}

bool operator < (const Pessoa &esq, const Pessoa &dir)
{
    return esq.getCpf()<dir.getCpf();
}

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

Pessoa::Pessoa(string cpf):cpf(cpf)
{

}

Pessoa::Pessoa(){

}

bool operator<(const Pessoa&p1, const Pessoa&p2){
    return p1.getCpf() < p2.getCpf();
}


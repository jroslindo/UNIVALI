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

string Pessoa::getDataNascimento() const
{
    return dataNascimento;
}

void Pessoa::setDataNascimento(const string &value)
{
    dataNascimento = value;
}

string Pessoa::getApelido() const
{
    return apelido;
}

void Pessoa::setApelido(const string &value)
{
    apelido = value;
}
Pessoa::Pessoa()
{

}


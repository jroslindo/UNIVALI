#include "pessoa.h"

string Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const string &value)
{
    nome = value;
}

string Pessoa::getSobrenome() const
{
    return sobrenome;
}

void Pessoa::setSobrenome(const string &value)
{
    sobrenome = value;
}

string Pessoa::getCpf() const
{
    return cpf;
}

void Pessoa::setCpf(const string &value)
{
    cpf = value;
}

Pessoa::Pessoa()
{

}

Pessoa::Pessoa(string cpf){

    this->cpf=cpf;

}

 void Pessoa::imprimir(){

     cout<<"\n------------PESSOA-------------";
     cout<<"\nNome: "<<this->nome;
     cout<<"\nSobrenome: "<<this->sobrenome;
     cout<<"\nCPF: "<<this->cpf;
     cout<<"\n-------------------------------";
     cout<<"\n";

 }

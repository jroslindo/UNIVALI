#include "comprador.h"

string Comprador::getNome() const
{
    return nome;
}

void Comprador::setNome(const string &value)
{
    nome = value;
}

float Comprador::getCpf() const
{
    return cpf;
}

void Comprador::setCpf(float value)
{
    cpf = value;
}

Comprador::Comprador(string nome, float cpf)
{
    this->nome=nome;
    this->cpf=cpf;
}

Comprador::~Comprador()
{

}

void Comprador::mostraComprador(){
    cout<<"Nome: "<<nome<<endl;
    cout<<"CPF: "<<cpf<<endl;
}

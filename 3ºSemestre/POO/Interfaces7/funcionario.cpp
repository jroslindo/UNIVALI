#include "funcionario.h"

string Funcionario::getCpf() const
{
    return cpf;
}

void Funcionario::setCpf(const string &value)
{
    cpf = value;
}

string Funcionario::getNome() const
{
    return nome;
}

void Funcionario::setNome(const string &value)
{
    nome = value;
}

int Funcionario::getIdade() const
{
    return idade;
}

void Funcionario::setIdade(int value)
{
    idade = value;
}

float Funcionario::getSalario() const
{
    return salario;
}

void Funcionario::setSalario(float value)
{
    salario = value;
}

Funcionario::Funcionario()
{

}

float Funcionario::getCusto(){

    return this->salario;

}

void Funcionario::imprimirConsole(){

    cout<<"\n---------------------------------";
    cout<<"\nNome: "<<this->nome;
    cout<<"\nIdade: "<<this->idade;
    cout<<"\nCPF: "<<this->cpf;
    cout<<"\nSalario: "<<this->salario;
    cout<<"\n---------------------------------";

}

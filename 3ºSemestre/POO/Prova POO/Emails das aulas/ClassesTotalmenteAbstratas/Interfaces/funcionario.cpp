#include "funcionario.h"

void Funcionario::imprimirConsole(){
    cout<<"\n-------FUNCIONARIO--------";
    cout<<"\nNome: "<<getNome();
    cout<<"\nIdade: "<<getIdade();
    cout<<"\nCPF: "<<getCpf();
    cout<<"\nSalario: "<<getSalario();
    cout<<"\n--------------------------";
    cout<<"\n";
}

float Funcionario::getCusto(){
    return this->salario;
}

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

void Funcionario::setSalario(float value)
{
    salario = value;
}

float Funcionario::getSalario() const
{
    return salario;
}
Funcionario::Funcionario()
{

}


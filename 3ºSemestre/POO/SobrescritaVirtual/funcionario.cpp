#include "funcionario.h"

double Funcionario::getSalario() const
{
    return salario;
}

void Funcionario::setSalario(double value)
{
    salario = value;
}

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(string cpf, double salario){

    this->salario=salario;
    this->setCpf(cpf);

}

void Funcionario::imprimir(){

    cout<<"\n------------FUNCIONARIO-------------";
    cout<<"\nNome: "<<this->getNome();
    cout<<"\nSobrenome: "<<this->getSobrenome();
    cout<<"\nCPF: "<<this->getCpf();
    cout<<"\nSalario: "<<this->getSalario();
    cout<<"\n------------------------------------";
    cout<<"\n";

}

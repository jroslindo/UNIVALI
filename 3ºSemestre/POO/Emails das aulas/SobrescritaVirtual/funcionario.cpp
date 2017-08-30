#include "funcionario.h"

Funcionario::Funcionario(string cpf, double salario){
    this->salario = salario;
    this->setCpf(cpf);
}

void Funcionario::imprimir(){
    cout<<"-------FUNCIONARIO-------";
    cout<<"\nNome:\t"<<this->getNome();
    cout<<"\nSobrenome:\t"<<this->getSobrenome();
    cout<<"\nCPF:\t"<<this->getCpf();
    cout<<"\nSalario:\t"<<this->salario;
    cout<<"\n-------------------------";
    cout<<"\n";
}



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


#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "pessoa.h"

class Funcionario: public Pessoa
{
private:
    double salario;
public:
    Funcionario();
    Funcionario(string cpf, double salario); //sobrecarga
    void imprimir(); //sobrescrita (de membro da classe Pessoa)

    double getSalario() const;
    void setSalario(double value);
};

#endif // FUNCIONARIO_H

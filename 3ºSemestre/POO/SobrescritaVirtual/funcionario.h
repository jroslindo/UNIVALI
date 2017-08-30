#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "pessoa.h"

class Funcionario :public Pessoa
{
private:

    double salario;

public:

    Funcionario();
    Funcionario(string cpf, double salario); //Sobrecarga
    void imprimir(); //Sobrescrita (do membro da classe pessoa)

    double getSalario() const;
    void setSalario(double value);
};

#endif // FUNCIONARIO_H

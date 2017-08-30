#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
using namespace std;
#include "custo.h"
#include "visualizacao.h"

class Funcionario :public Custo, public Visualizacao
{
private:

    string cpf;
    string nome;
    int idade;
    float salario;


public:

    Funcionario();
    void imprimirConsole();

    string getCpf() const;
    void setCpf(const string &value);
    string getNome() const;
    void setNome(const string &value);
    int getIdade() const;
    void setIdade(int value);
    float getSalario() const;
    void setSalario(float value);

    float getCusto();

};

#endif // FUNCIONARIO_H

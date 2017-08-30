#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include "custo.h"
#include "visualizacao.h"
using namespace std;
class Funcionario: public Custo,
        public Visualizacao
{
private:
    string cpf;
    string nome;
    int idade;
    float salario;
public:
    Funcionario();
    string getCpf() const;
    void setCpf(const string &value);
    string getNome() const;
    void setNome(const string &value);
    int getIdade() const;
    void setIdade(int value);
    void setSalario(float value);
    float getSalario() const;
    float getCusto();
    void imprimirConsole();
};

#endif // FUNCIONARIO_H

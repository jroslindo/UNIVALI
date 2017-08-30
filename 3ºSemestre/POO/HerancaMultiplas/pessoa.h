#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;

class Pessoa
{

private:

    string nome;
    string cpf;
    int idade;

public:

    Pessoa();

    string getNome() const;
    void setNome(const string &value);

    string getCpf() const;
    void setCpf(const string &value);

    int getIdade() const;
    void setIdade(int value);

};

#endif // PESSOA_H

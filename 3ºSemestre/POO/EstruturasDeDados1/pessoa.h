#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;

class Pessoa
{
private:

    string cpf;
    string nome;

public:

    Pessoa();
    Pessoa(string cpf);

    string getCpf() const;
    void setCpf(const string &value);
    string getNome() const;
    void setNome(const string &value);

    friend bool operator < (const Pessoa &esq, const Pessoa &dir);

};

#endif // PESSOA_H

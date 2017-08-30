#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;

class Pessoa
{
private:
    string nome;
    string sobrenome;
    string cpf;
public:
    Pessoa();
    Pessoa(string cpf); //Sobrecarga - mesmo nome mas parametros diferentes

    string getNome() const;
    void setNome(const string &value);
    string getSobrenome() const;
    void setSobrenome(const string &value);
    string getCpf() const;
    void setCpf(const string &value);

    virtual void imprimir();
};

#endif // PESSOA_H

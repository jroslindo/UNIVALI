#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;

class Pessoa
{
protected: //funciona na propria classe e na subclasse

    string apelido;

private:

    string cpf;
    string nome;
    string dataNascimento;

public:

    Pessoa();

    string getCpf() const;
    void setCpf(const string &value);

    string getNome() const;
    void setNome(const string &value);

    string getDataNascimento() const;
    void setDataNascimento(const string &value);

    string getApelido() const;
    void setApelido(const string &value);
};

#endif // PESSOA_H

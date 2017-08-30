#ifndef COMPRADOR_H
#define COMPRADOR_H
#include <iostream>
using namespace std;

class Comprador
{
private:

    string nome;
    float cpf;

public:

    //CONSTRUTOR//
    Comprador(string nome, float cpf);

    //DESTRUTOR//
    ~Comprador();

    //ENCAPSULAMENTO//
    string getNome() const;
    void setNome(const string &value);

    float getCpf() const;
    void setCpf(float value);

    //METODOS//
    void mostraComprador();
};

#endif // COMPRADOR_H

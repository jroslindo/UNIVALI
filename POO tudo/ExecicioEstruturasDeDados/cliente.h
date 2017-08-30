#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <list>

#include "Veiculo.h"

using namespace std;



class Cliente
{
private:
    string nome;
    string dataCadastro;
    string endereco;
    list<Veiculo> veiculos;
public:
    Cliente();
    string getNome() const;
    void setNome(const string &value);
    string getDataCadastro() const;
    void setDataCadastro(const string &value);
    string getEndereco() const;
    void setEndereco(const string &value);
    list<Veiculo> & getVeiculos();
    virtual string getId();

};

#endif // CLIENTE_H

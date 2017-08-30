#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
using namespace std;
#include "pessoa.h"

class Cliente: public Pessoa
{
private:

    bool bomPagador;
    float totalDeCompras;
    string contato;

public:

    Cliente();

    bool getBomPagador() const;
    void setBomPagador(bool value);

    float getTotalDeCompras() const;
    void setTotalDeCompras(float value);

    string getContato() const;
    void setContato(const string &value);
};

#endif // CLIENTE_H

#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include "pessoa.h"
#include <iostream>
using namespace std;

class Administrativo //:public Pessoa  Para arrumar o erro de ambiguidade
{

private:

    string cadastroProfissional;
    int anosDeCasa;

public:

    Administrativo();

    string getCadastroProfissional() const;
    void setCadastroProfissional(const string &value);

    int getAnosDeCasa() const;
    void setAnosDeCasa(int value);

};

#endif // ADMINISTRATIVO_H

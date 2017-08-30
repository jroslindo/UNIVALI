#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <iostream>
using namespace std;
#include "pessoa.h"
class Administrativo// : public Pessoa
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

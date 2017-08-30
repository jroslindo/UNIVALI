#ifndef FISICO_H
#define FISICO_H

#include "cliente.h"

class Fisico: public Cliente
{
private:
    string CPF;
public:
    Fisico();
    string getCPF() const;
    void setCPF(const string &value);
    string getId();
};

#endif // FISICO_H

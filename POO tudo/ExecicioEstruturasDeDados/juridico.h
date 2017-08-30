#ifndef JURIDICO_H
#define JURIDICO_H

#include "cliente.h"

class Juridico: public Cliente
{
private:
    string CNPJ;
public:
    Juridico();
    string getCNPJ() const;
    void setCNPJ(const string &value);
    string getId();
};

#endif // JURIDICO_H

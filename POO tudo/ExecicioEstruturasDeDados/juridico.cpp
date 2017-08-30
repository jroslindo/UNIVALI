#include "juridico.h"


string Juridico::getCNPJ() const
{
    return CNPJ;
}

void Juridico::setCNPJ(const string &value)
{
    CNPJ = value;
}

string Juridico::getId(){
    return CNPJ;
}

Juridico::Juridico()
{

}


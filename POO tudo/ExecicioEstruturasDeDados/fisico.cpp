#include "fisico.h"


string Fisico::getCPF() const
{
    return CPF;
}

void Fisico::setCPF(const string &value)
{
    CPF = value;
}

string Fisico::getId(){
    return CPF;
}

Fisico::Fisico()
{

}


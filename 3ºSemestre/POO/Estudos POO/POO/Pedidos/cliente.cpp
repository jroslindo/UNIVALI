#include "cliente.h"

bool Cliente::getBomPagador() const
{
    return bomPagador;
}

void Cliente::setBomPagador(bool value)
{
    bomPagador = value;
}

float Cliente::getTotalDeCompras() const
{
    return totalDeCompras;
}

void Cliente::setTotalDeCompras(float value)
{
    totalDeCompras = value;
}

string Cliente::getContato() const
{
    return contato;
}

void Cliente::setContato(const string &value)
{
    contato = value;
}

Cliente::Cliente()
{
    //nome = "";
    apelido = "";
    totalDeCompras = 0.0;
}

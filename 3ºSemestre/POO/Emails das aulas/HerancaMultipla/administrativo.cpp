#include "administrativo.h"


string Administrativo::getCadastroProfissional() const
{
    return cadastroProfissional;
}

void Administrativo::setCadastroProfissional(const string &value)
{
    cadastroProfissional = value;
}

int Administrativo::getAnosDeCasa() const
{
    return anosDeCasa;
}

void Administrativo::setAnosDeCasa(int value)
{
    anosDeCasa = value;
}
Administrativo::Administrativo()
{

}


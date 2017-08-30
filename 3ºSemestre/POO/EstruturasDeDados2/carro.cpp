#include "carro.h"

string Carro::getPlaca() const
{
    return placa;
}

void Carro::setPlaca(const string &value)
{
    placa = value;
}

string Carro::getModelo() const
{
    return modelo;
}

void Carro::setModelo(const string &value)
{
    modelo = value;
}

string Carro::getMarca() const
{
    return marca;
}

void Carro::setMarca(const string &value)
{
    marca = value;
}

string Carro::getCor() const
{
    return cor;
}

void Carro::setCor(const string &value)
{
    cor = value;
}

Carro::Carro()
{

}

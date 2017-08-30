#include "veiculo.h"


string Veiculo::getPlaca() const
{
    return placa;
}

void Veiculo::setPlaca(const string &value)
{
    placa = value;
}

string Veiculo::getMarca() const
{
    return marca;
}

void Veiculo::setMarca(const string &value)
{
    marca = value;
}

string Veiculo::getModelo() const
{
    return modelo;
}

void Veiculo::setModelo(const string &value)
{
    modelo = value;
}

unsigned Veiculo::getAno() const
{
    return ano;
}

void Veiculo::setAno(const unsigned &value)
{
    ano = value;
}

string Veiculo::getCor() const
{
    return cor;
}

void Veiculo::setCor(const string &value)
{
    cor = value;
}

TIPO_VEICULO Veiculo::getTipo() const
{
    return tipo;
}

void Veiculo::setTipo(const TIPO_VEICULO &value)
{
    tipo = value;
}
Veiculo::Veiculo()
{

}


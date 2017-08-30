#include "carro.h"


string Carro::getPlaca() const
{
    return placa;
}

string Carro::getModelo() const
{
    return modelo;
}

void Carro::setModelo(const string &value)
{
    modelo = value;
}

void Carro::setPlaca(const string &value)
{
    placa = value;
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
Carro::Carro(string placa):placa(placa){

}

/*bool operator==(const Carro &c1,const Carro &c2){
    return c1.getPlaca() == c2.getPlaca();
}*/


#include "automovel.h"

string Automovel::getPlaca() const
{
    return placa;
}

void Automovel::setPlaca(const string &value)
{
    placa = value;
}

string Automovel::getCor() const
{
    return cor;
}

void Automovel::setCor(const string &value)
{
    cor = value;
}

string Automovel::getModelo() const
{
    return modelo;
}

void Automovel::setModelo(const string &value)
{
    modelo = value;
}

float Automovel::getManutencao() const
{
    return manutencao;
}

void Automovel::setManutencao(float value)
{
    manutencao = value;
}

ModalidadeAutomovel Automovel::getTipo() const
{
    return tipo;
}

void Automovel::setTipo(const ModalidadeAutomovel &value)
{
    tipo = value;
}

Automovel::Automovel()
{

}

float Automovel::getCusto(){

    if(tipo == UTILITARIO){
        return this->manutencao*2;
    }else{
        return this->manutencao;
    }
}

void Automovel::imprimirConsole(){

    cout<<"\n---------------------------------";
    cout<<"\nModelo: "<<this->modelo;
    cout<<"\nPlaca: "<<this->placa;
    cout<<"\nCor: "<<this->cor;
    cout<<"\nManutencao: "<<this->manutencao;
    cout<<"\nTipo: "<<getTipo();
    cout<<"\n---------------------------------";

}

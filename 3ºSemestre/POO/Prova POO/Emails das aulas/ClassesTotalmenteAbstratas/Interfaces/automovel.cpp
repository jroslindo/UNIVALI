#include "automovel.h"

void Automovel::imprimirConsole(){
    cout<<"\n-------AUTOMOVEL--------";
    cout<<"\nModelo: "<<getModelo();
    cout<<"\nCor: "<<getCor();
    cout<<"\nPlaca: "<<getPlaca();
    cout<<"\nManutencao: "<<getManutencao();
    cout<<"\nTipo: "<<getTipo();
    cout<<"\n------------------------";
    cout<<"\n";
}

float Automovel::getCusto(){
    if (tipo == UTILITARIO){
        return this->manutencao*2;
    }else{
        return this->manutencao;
    }
}

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


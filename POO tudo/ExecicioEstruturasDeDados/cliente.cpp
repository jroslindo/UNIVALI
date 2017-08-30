#include "cliente.h"


string Cliente::getNome() const
{
    return nome;
}

void Cliente::setNome(const string &value)
{
    nome = value;
}

string Cliente::getDataCadastro() const
{
    return dataCadastro;
}

void Cliente::setDataCadastro(const string &value)
{
    dataCadastro = value;
}

string Cliente::getEndereco() const
{
    return endereco;
}

void Cliente::setEndereco(const string &value)
{
    endereco = value;
}

list<Veiculo> & Cliente::getVeiculos()
{
    return veiculos;
}

string Cliente::getId()
{
    return "";
}


Cliente::Cliente()
{

}


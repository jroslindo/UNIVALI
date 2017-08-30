#include "itempedido.h"

string itemPedido::getDescricao() const
{
    return descricao;
}

void itemPedido::setDescricao(const string &value)
{
    descricao = value;
}

float itemPedido::getQtd() const
{
    return qtd;
}

void itemPedido::setQtd(float value)
{
    qtd = value;
}

float itemPedido::getPrecoUnit() const
{
    return precoUnit;
}

void itemPedido::setPrecoUnit(float value)
{
    precoUnit = value;
}

string itemPedido::getUn() const
{
    return un;
}

void itemPedido::setUn(const string &value)
{
    un = value;
}

itemPedido::itemPedido()
{

}

itemPedido::itemPedido(string descricao,float qtd, float precoUnit, string un)
    : descricao(descricao),qtd(qtd),precoUnit(precoUnit),un(un)
{

}

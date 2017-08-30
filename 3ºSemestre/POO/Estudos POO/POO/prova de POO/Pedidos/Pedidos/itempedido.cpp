#include "itempedido.h"


string ItemPedido::getDesc() const
{
    return desc;
}

void ItemPedido::setDesc(const string &value)
{
    desc = value;
}

float ItemPedido::getQtd() const
{
    return qtd;
}

void ItemPedido::setQtd(float value)
{
    qtd = value;
}

float ItemPedido::getPrecoUnit() const
{
    return precoUnit;
}

void ItemPedido::setPrecoUnit(float value)
{
    precoUnit = value;
}

string ItemPedido::getUn() const
{
    return un;
}

void ItemPedido::setUn(const string &value)
{
    un = value;
}
ItemPedido::ItemPedido()
{

}
ItemPedido::ItemPedido(string desc, float qtd,
                       float precoUnit, string un)
    : desc(desc),qtd(qtd),precoUnit(precoUnit),
      un(un)
{

}

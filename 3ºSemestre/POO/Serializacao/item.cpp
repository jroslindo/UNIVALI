#include "item.h"


string Item::getDescricao() const
{
    return descricao;
}

void Item::setDescricao(const string &value)
{
    descricao = value;
}

float Item::getPoder() const
{
    return poder;
}

void Item::setPoder(float value)
{
    poder = value;
}
Item::Item()
{

}

Item::Item(string desc, float poder){
    this->descricao = desc;
    this->poder = poder;
}


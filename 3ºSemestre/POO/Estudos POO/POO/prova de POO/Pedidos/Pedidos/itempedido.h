#ifndef ITEMPEDIDO_H
#define ITEMPEDIDO_H

#include <iostream>
using namespace std;

class ItemPedido
{
private:
    string desc;
    float qtd;
    float precoUnit;
    string un;
public:
    ItemPedido();
    ItemPedido(string desc, float qtd,
               float precoUnit, string un);
    string getDesc() const;
    void setDesc(const string &value);
    float getQtd() const;
    void setQtd(float value);
    float getPrecoUnit() const;
    void setPrecoUnit(float value);
    string getUn() const;
    void setUn(const string &value);
};

#endif // ITEMPEDIDO_H

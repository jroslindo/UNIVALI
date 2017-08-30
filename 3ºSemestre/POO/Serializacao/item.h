#ifndef ITEM_H
#define ITEM_H


#include <iostream>
using namespace std;

class Item
{
private:
    string descricao;
    float poder;
public:
    Item();
    Item(string desc, float poder);
    string getDescricao() const;
    void setDescricao(const string &value);
    float getPoder() const;
    void setPoder(float value);
};

#endif // ITEM_H

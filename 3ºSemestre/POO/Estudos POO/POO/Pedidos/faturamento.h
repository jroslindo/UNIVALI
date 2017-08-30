#ifndef FATURAMENTO_H
#define FATURAMENTO_H
#include <iostream>
using namespace std;
#include "pedido.h"

class Faturamento
{
public:
    Faturamento();
    void faturar(Pedido &p);
};

#endif // FATURAMENTO_H

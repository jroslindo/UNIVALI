#include "faturamento.h"
#include <iostream>
using namespace std;

Faturamento::Faturamento()
{

}

void Faturamento::faturar(Pedido &p){
    p.setFaturado(true);
}

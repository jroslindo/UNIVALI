#include "faturamento.h"

Faturamento::Faturamento()
{

}

void Faturamento::faturar(Pedido &p){
    p.setFaturado(true);
}


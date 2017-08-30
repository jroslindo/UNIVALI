#ifndef PEDIDO_H
#define PEDIDO_H

#include "cliente.h"
#include "itempedido.h"

class Pedido
{
private:
    string data;
    Cliente cliente;
    string localEntrega;
    ItemPedido itens[20];
    int qtdItens;
    bool faturado;
public:
    Pedido(string data, Cliente cli,
           string localEntrega);
    string getData() const;
    Cliente getCliente() const;
    string getLocalEntrega() const;
    bool getFaturado() const;
    int getQtdItens() const;

    bool inserirItem(ItemPedido p);
    bool removerItem(int pos);
    void imprimirPedido();
    void setFaturado(bool value);
};

#endif // PEDIDO_H

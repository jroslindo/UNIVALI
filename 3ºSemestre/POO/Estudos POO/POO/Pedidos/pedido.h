#ifndef PEDIDO_H
#define PEDIDO_H
#include "cliente.h"
#include "itempedido.h"
#include <iostream>
using namespace std;

class Pedido
{
private:

    string dataPedido;
    Cliente cliente;
    string localDeEntrega;
    itemPedido itens[20];
    int qtdItens;
    bool faturado;

public:

    Pedido(string dataPedido, Cliente cliente, string localDeEntrega);

    string getDataPedido() const;

    Cliente getCliente() const;

    string getLocalDeEntrega() const;

    bool getFaturado() const;

    int getQtdItens() const;

    bool inserirItem(itemPedido p);

    bool removerItem(int pos);

    void imprimirPedido();

    void setFaturado(bool value);

};

#endif // PEDIDO_H

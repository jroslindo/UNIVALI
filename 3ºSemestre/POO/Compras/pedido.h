#ifndef PEDIDO_H
#define PEDIDO_H
#include "comprador.h"
#include <iostream>
using namespace std;

class Pedido :public Comprador
{
private:

    float preco;
    int quantidade;

public:
    //CONSTRUTOR//
    Pedido(string nome, float cpf);

    //DESTRUTOR//
    ~Pedido();

    //ENCAPSULAMENTO//
    float getPreco() const;
    void setPreco(float value);
    int getQuantidade() const;
    void setQuantidade(int value);

    //METODOS//
    void mostrarPedido(Comprador &p);
};

#endif // PEDIDO_H

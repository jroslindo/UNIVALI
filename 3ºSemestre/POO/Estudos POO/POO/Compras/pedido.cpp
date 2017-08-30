#include "pedido.h"

float Pedido::getPreco() const
{
    return preco;
}

void Pedido::setPreco(float value)
{
    preco = value;
}

int Pedido::getQuantidade() const
{
    return quantidade;
}

void Pedido::setQuantidade(int value)
{
    quantidade = value;
}

Pedido::Pedido(string nome, float cpf)
    :Comprador(nome,cpf)
{
    this -> preco = preco;
    this -> quantidade = quantidade;
}

Pedido::~Pedido()
{

}

void Pedido::mostrarPedido(Comprador &p){
    p.mostraComprador();
    cout<<"Preco do Pedido: "<<preco<<endl;
    cout<<"Quantidade: "<<quantidade<<endl;
}

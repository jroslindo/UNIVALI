#include <iostream>
#include <comprador.h>
#include <pedido.h>

using namespace std;

int main(){
    Pedido p("Gustavo Copini Decol", 123);
    p.setPreco(55.00);
    p.setQuantidade(2);
    //c1.mostraComprador();
    p.mostrarPedido(p);
    return 0;
}

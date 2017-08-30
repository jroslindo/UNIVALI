#include <iostream>

using namespace std;

#include "cliente.h"
#include "pedido.h"
#include "faturamento.h"

int main()
{

    Cliente cli;
    cli.setNome("Jorge Xavier");
    cli.setBomPagador(true);
    cli.setContato("55 48 33669989");
    cli.setDataNascimento("17/12/1983");
    Pedido ped1("21/03/2019", cli,
                "R. Uruguai, 458 - Itajaí/SC");
    ItemPedido p1 ("Tarrafa", 10, 100, "un");
    ItemPedido p2 ("Tainha Ovada", 2, 20, "kg");
    ItemPedido p3 ("Atum", 3, 35, "kg");
    ped1.inserirItem(p1);
    ped1.inserirItem(p2);
    ped1.inserirItem(p3);
    ped1.imprimirPedido();

    Faturamento fat;
    fat.faturar(ped1);
    ped1.imprimirPedido();


    return 0;
}


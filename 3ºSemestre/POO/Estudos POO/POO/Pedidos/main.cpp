#include <iostream>

using namespace std;

#include "Pessoa.h"
#include "cliente.h"
#include "faturamento.h"
#include "pedido.h"

int main()
{
        Cliente cli;
        cli.setNome("Mascus Kane");
        cli.setCpf("105.089.959-81");
        cli.setBomPagador(true);
        cli.setContato("48 3368-5654");
        cli.setDataNascimento("17/12/1983");

        Pedido ped1("21/03/2017",cli, "R.Uruguais Itajai-SC");

        itemPedido p1("Tarrafa", 10, 100, "un");
        itemPedido p2("Talinha Ovada", 2, 20, "kg");
        itemPedido p3("Atum", 3, 35, "kg");

        ped1.inserirItem(p1);
        ped1.inserirItem(p2);
        ped1.inserirItem(p3);
        ped1.imprimirPedido();

        Faturamento fat;
        fat.faturar(ped1);
        ped1.imprimirPedido();
}

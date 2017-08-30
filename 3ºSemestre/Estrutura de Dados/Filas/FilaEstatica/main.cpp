#include <iostream>
using namespace std;
#include "TADFilaEstatica.h"
#include "Banco.h"

int main()
{

    TFila <TBanco,5> Bradesco;
    TBanco cliente1,cliente2,c;

    cliente1.nome="joao";
    cliente2.nome="Gustavo";

    inicicializar(Bradesco);
    queued(Bradesco,cliente1);
    queued(Bradesco,cliente2);
    c=unqueued(Bradesco);
    cout<<"Retorno: "<<c.nome;
    //imprimir(Bradesco);

}

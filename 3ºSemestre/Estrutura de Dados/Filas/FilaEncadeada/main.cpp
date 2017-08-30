#include <iostream>
using namespace std;
#include "TADFilaEncadeada.h"
#include "Banco.h"

int main()
{
        int cu=2, rola=2;
    TFila <TBanco> Bradesco[cu];
    TFila <TBanco> Bradesco2[rola];

    inicializar(Bradesco[0]);
    inicializar(Bradesco[1]);
    inicializar(Bradesco2[0]);
    inicializar(Bradesco2[1]);

    TBanco cliente1,cliente2,cliente3,cliente4,cliente5;

    cliente1.cliente="Joao Paulo Roslindo";
    cliente2.cliente="Gustavo Lindo";
    cliente3.cliente="Arroz lindo";

    cliente4.cliente="Joao gayzao";
    cliente5.cliente="joao viadao";


    queued(Bradesco[0],cliente1);
    queued(Bradesco[0],cliente2);
    queued(Bradesco[1],cliente3);

    queued(Bradesco2[0],cliente4);
    queued(Bradesco2[1],cliente5);
//    unqueued(Bradesco);
    //cl=unqueued(Bradesco);
    //cout <<"Nome: "<< cl.cliente;
    //cl=unqueued(Bradesco);
    imprimir(Bradesco[0]);
    imprimir(Bradesco[1]);
       imprimir(Bradesco2[0]);
    imprimir(Bradesco2[1]);
    //cout <<"Nome: "<<endl;
}

#include <iostream>

using namespace std;
#include "TADFila.h"

int main()
{

    TFila <TBanco,10> Bradesco;

    inicializar(Bradesco);

    TBanco pessoa1,pessoa2,pessoa3,pessoa4;

    pessoa1.nome="Gustavo";
    pessoa2.nome="Joao";
    pessoa3.nome="Eduardo";
    pessoa4.nome="Daniel";

    inserirFila(Bradesco, pessoa1);
    inserirFila(Bradesco, pessoa2);
    inserirFila(Bradesco, pessoa3);
    inserirFila(Bradesco, pessoa4);

    removerFila(Bradesco);
    removerFila(Bradesco);
    removerFila(Bradesco);
    //removerFila(Bradesco);

    imprimir(Bradesco);

}

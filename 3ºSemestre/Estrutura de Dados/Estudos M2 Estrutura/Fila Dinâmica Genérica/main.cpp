#include <iostream>

using namespace std;
#include "TADFila.h"

int main()
{

    TFila <TBanco> Bradesco;

    inicializa(Bradesco);

    TBanco pessoa1,pessoa2,pessoa3,pessoa4;

    pessoa1.nome="Gustavo";
    pessoa2.nome="Eduardo";
    pessoa3.nome="Joao";
    pessoa4.nome="Daniel";

    insereFila(Bradesco, pessoa1);
    insereFila(Bradesco, pessoa3);
    insereFila(Bradesco, pessoa2);
    insereFila(Bradesco, pessoa4);

    removerFila(Bradesco);
    removerFila(Bradesco);
    removerFila(Bradesco);
    //removerFila(Bradesco);

    imprimirFila(Bradesco);

}

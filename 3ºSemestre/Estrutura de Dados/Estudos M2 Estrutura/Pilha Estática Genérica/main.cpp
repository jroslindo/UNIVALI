#include <iostream>

using namespace std;
#include "TADPilha.h"

int main()
{
    TPilha <TBanco,4> Bradesco;

    inicializar(Bradesco);

    TBanco pessoa1,pessoa2,pessoa3,pessoa4;

    pessoa1.nome="Gustavo";
    pessoa2.nome="Joao";
    pessoa3.nome="Eduardo";
    pessoa4.nome="Daniel";

    push(Bradesco, pessoa1);
    push(Bradesco, pessoa2);
    push(Bradesco, pessoa3);
    push(Bradesco, pessoa4);


    pop(Bradesco);
     pop(Bradesco);
      pop(Bradesco);

    imprimir(Bradesco);
}

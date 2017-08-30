#include <iostream>

using namespace std;

#include "TADPilhaEncadeada.h"
#include "Banco.h"

int main()
{

    TPilha <TBanco> Bradesco;
    inicializar(Bradesco);
    TBanco cliente1;

    cliente1.nome="Joao";

    push(Bradesco,cliente1);

    pop(Bradesco);

    imprimir(Bradesco);
}

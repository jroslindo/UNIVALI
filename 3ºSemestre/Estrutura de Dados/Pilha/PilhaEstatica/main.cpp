#include <iostream>

using namespace std;
#include "TADPilhaEstatica.h"
#include "Banco.h"

int main()
{
    TPilha <TBanco,5> Bradesco;

    inicializar(Bradesco);

    TBanco cliente1,cliente2;

    cliente1.nome="Joao";
    cliente2.nome="Gustavo";

    push(Bradesco,cliente1);
    push(Bradesco,cliente2);

    //cout<<pop(Bradesco).nomekk0;ç00
    imprimir(Bradesco);

}

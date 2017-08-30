#include <iostream>

using namespace std;
#include "TADPilha.h"

int main()
{

    TPilha <TBanco> Bradesco;

    inicializar(Bradesco);

    TBanco pessoa1, pessoa2, pessoa3, pessoa4;

    pessoa1.nome="Gustavo";
    pessoa2.nome="Eduardo";
    pessoa3.nome="Joao";
    pessoa4.nome="Daniel";

    inserirPilha(Bradesco, pessoa1);
    inserirPilha(Bradesco, pessoa2);
    inserirPilha(Bradesco, pessoa3);
    inserirPilha(Bradesco, pessoa4);

    removerPilha(Bradesco);

    imprimir(Bradesco);


}

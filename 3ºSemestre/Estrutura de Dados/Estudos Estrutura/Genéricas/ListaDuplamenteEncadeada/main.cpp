#include <iostream>

using namespace std;

#include "TADListaDuplamenteEncadeadaGenerica.h"
#include "Baralho.h"

int main()
{

    TLista <TCarta> poker;
    TCarta card1,card2,card3,card4;

    card1.naipe="OURO";
    card1.valor=1;

    card2.naipe="OURO";
    card2.valor=2;

    card3.naipe="OURO";
    card3.valor=3;

    card4.naipe="CORINGA";
    card4.valor=69;

    inicializar(poker);

    inserirFim(poker,card1);
    inserirFim(poker,card2);
    inserirFim(poker,card3);

    imprimir(poker);

}

#include <iostream>

using namespace std;

#include "TADEncadeadaNGenerica.h"

int main()
{
    TLista poker;
    TCarta card1,card2,card3,card4;
    int p;

    card1.naipe="ouro";
    card1.valor=1;
    card2.naipe="ouro";
    card2.valor=2;
    card3.naipe="ouro";
    card3.valor=3;
    card4.naipe="CORINGA";
    card4.valor=69;

    inicializar(poker);

    inserirFim(poker,card1);
    inserirFim(poker,card2);
    inserirFim(poker,card3);

    imprimirBaralho(poker);

}

#include <iostream>

using namespace std;

#include "TADListaEstaticaGenerica.h"
#include "Baralho.h"

int main()
{

    TLista<TCarta, 52> poker;
    TCarta card1,card2,card3,card4;

    card1.naipe="ouro";
    card1.valor=1;
    card2.naipe="ouro";
    card2.valor=2;
    card3.naipe="ouro";
    card3.valor=3;
    card4.naipe="coringa";
    card4.valor=69;

    inicializar(poker);

    inserirFim(poker,card1);
    inserirFim(poker,card2);
    inserirFim(poker,card3);

    imprimirBaralho(poker);



}

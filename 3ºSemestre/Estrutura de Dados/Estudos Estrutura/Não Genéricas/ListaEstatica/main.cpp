#include <iostream>

using namespace std;

#include "TADEstaticaNGenerica.h"

int main()
{
   TLista poker;
   TCarta card1, card2, card3, card4;
   int p;

   inicializar(poker);

   card1.naipe="ouro";
   card1.valor=1;
   card2.naipe="ouro";
   card2.valor=2;
   card3.naipe="ouro";
   card3.valor=3;
   card4.naipe="coringa";
   card4.valor=69;

   inserirInicio(poker,card3);
   inserirInicio(poker,card2);
   inserirInicio(poker,card1);
   removerPosicao(poker,0);
   imprimirBaralho(poker);

}

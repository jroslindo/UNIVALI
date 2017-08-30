#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

#include "TADListaEstatica.h"
#include "Baralho.h"


int main()
{

    Tlista <TCarta, 52> poker;
    Tlista <TCarta, 2> mao1;
    Tlista <TCarta, 2> mao2;
    Tlista <TCarta, 2> mao3;
    Tlista <TCarta, 5> mesa;
    inicializar(poker);
    inicializar(mao1);
    inicializar(mao2);
    inicializar(mao3);
    inicializar(mesa);
    /*TCarta card1,card2,card3,card;

    card1.naipe="ouro";
    card1.valor=5;

    card2.naipe="paus";
    card2.valor=7;

    card3.naipe="Espadas";
    card3.valor=9;

    /*insereInicio(poker,card2);
    insereInicio(poker,card3);
    inserePosicao(poker,card1,1);
    removeFim(poker);
    removeInicio(poker);
    inserePosicao(poker,card3,1);
    removePosicao(poker,1);*/
    //insereInicio(poker,card2);
    //insereInicio(poker,card3);
    //inserePosicao(poker,card1,1);
    montaBaralho(poker);
    embaralha(poker);
    //ordena(poker);
    //imprimeBaralho(poker);
    distribuiCartas(poker,mao1,mao2,mao3,mesa);

}

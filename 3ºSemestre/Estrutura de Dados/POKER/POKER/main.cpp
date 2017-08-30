#include <iostream>
#include <time.h>
#include <ctime>
#include <stdlib.h>

using namespace std;
#include "TadListaestatica.h"
#include "Poker.h"


int main()
{
    int digitado,n;
    int posicao;
    baralho poker;
    inicializar(poker);
    carta card;




    while (digitado != 0){
        cout << "\n\ndigite 0 para sair, 1 para inserir, 2 imprime lista, 3 para ver o numero de cartas, 4 remover final\n5 para remover inicio, 6 para inserir inicio, 7 para inserir na posi, 8 para remover carta na posi, 9 monta baralho, 10 embaralhar, 11 distribuir, 12 ordenar por bubble:  ";
        cin >> digitado;
    switch (digitado){
case 1:
     cout << "\ndigite o naipe: ";
     cin >> card.naipe;

     cout << "\ndigite o valor";
     cin >> card.valor;

     insercaoFinal(poker, card);
break;

case 2:

    imprimeLista(poker);
break;

case 3:

    contaCartas(poker);
break;

case 4:
    removedorFinal(poker);
    break;

case 5:
    removeInicio(poker);
break;

case 6:

    cout << "Numero de cartas: ";
    cin << n;
    insereInicio(poker, n);
    break;

case 7:
    cout << "\ndigite a posicao";
    cin >> posicao;

    cout << "\ndigite o naipe: ";
    cin >> card.naipe;

    cout << "\ndigite o valor";
    cin >> card.valor;

    inserePosi(poker, card,posicao);
break;

case 8:


    cout << "\ndigite a posicao";
    cin >> posicao;

    removePosicao (poker, posicao);
break;

case 9:
    montaBaralho(poker);
break;

case 10:
    embaralha (poker);
break;

case 11:

        distribuiCartas(poker, jogador[0], jogador[1], jogador[2], jogador[3], dealer[0], dealer[1]);

break;

case 12:

    ordenaBubble(poker);


break;




    }

    }



    return 0;
}

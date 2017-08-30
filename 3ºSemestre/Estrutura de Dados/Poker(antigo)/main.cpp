#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>
#include "TADListaEstatica.h"

int main()
{

    baralho poker,jogador[4],dealer[2];

    Inicializar(poker);

    carta card;

    int op,pos;

    do{

    cout <<"\n\n1-Inserir Carta no Final";
    cout <<"\n2-Remover Carta no Final";
    cout <<"\n3-Contar Cartas";
    cout <<"\n4-Mostrar Baralho";
    cout <<"\n5-Inserir Carta no Inicio";
    cout <<"\n6-Remover Carta no Inicio";
    cout <<"\n7-Inserir Carta na Posicao X";
    cout <<"\n8-Remover Carta na Posicao X";
    cout <<"\n9-Para Montar um Baralho de 52 Cartas";
    cout <<"\n10-Para Embaralhar o Baralhos";
    cout <<"\n11-Para Distribuir cartas";
    cout <<"\n12-Para Ordernar Cartas no modo Bolha\n\n";
    cin >>op;

    switch(op){

            case 1:
                cout <<"\nValor da carta: ";
                cin >>card.valor;
                cout <<"\nNaipe da carta: ";
                cin >>card.naipe;
                InsercaoFinal(poker,card);
            break;

            case 2:
                RemoveFinal(poker);
            break;

            case 3:
                ContaCartas(poker);
            break;

            case 4:
                ImprimiBaralho(poker);
            break;

            case 5:
                cout <<"\nValor da carta: ";
                cin >>card.valor;
                cout <<"\nNaipe da carta: ";
                cin >>card.naipe;
                insereInicio(poker,card);
            break;

            case 6:
                removeInicio(poker);
            break;

            case 7:
                cout <<"\nValor da carta: ";
                cin >>card.valor;
                cout <<"\nNaipe da carta: ";
                cin >>card.naipe;
                cout <<"\nPosicao: ";
                cin >>pos;
                InsercaoPosicao(poker,card,pos);
            break;


            case 8:
                cout <<"\nPosicao da Carta para Remover: ";
                cin >>pos;
                RemoverPosicao(poker,card,pos);
            break;

            case 9:
                MontaBaralho(poker);
            break;

            case 10:
                EmbaralhaBaralho(poker);
            break;

            case 11:
                distribuiCartas(poker, jogador[0], jogador[1], jogador[2], jogador[3], dealer[0], dealer[1]);
            break;

            case 12:
                ordenaBubble(poker);
            break;

        }
    }while(op!=0);
}

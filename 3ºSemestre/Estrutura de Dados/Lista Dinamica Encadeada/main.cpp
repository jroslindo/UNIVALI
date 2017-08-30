#include <iostream>
#include <stdlib.h>
using namespace std;
#include "lista_generica.h"
#include "playlist.h"



int main()
{
    Tlista <TMusica> playlist;

    inicializar(playlist);
    TMusica m1,m2,m3,m4;

    m1.nome = "musica0"; //0
    m2.nome = "musica1"; //1
    m3.nome = "musica2"; //2
    m4.nome = "musica3"; //3
    insereFinal(playlist, m1);
    insereFinal(playlist, m2);
    insereFinal(playlist, m3);
    insereFinal(playlist, m4);
    //removeInicio(playlist);

    //removeFinal(playlist);
    //contaLista(playlist);
    //inserePosicao(playlist,m4,0);
    removePosicao(playlist,3);
    mostraPlaylist(playlist);
}

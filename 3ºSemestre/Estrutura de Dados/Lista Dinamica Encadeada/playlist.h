#ifndef PLAYLIST_H_INCLUDED
#define PLAYLIST_H_INCLUDED
#include "lista_generica.h"


struct TMusica{

    string nome;
};

bool mostraPlaylist (Tlista <TMusica> &lista){

        TElemento<TMusica> *nav = lista.inicio;
        if(lista.inicio==NULL){
            return false;
        }else{
            while (nav != NULL){
                cout << "Nome da musica: " << nav->dado.nome << endl;
                nav = nav ->proximo;
            }
        }
}

/*bool ordenaBolha(Tlista<TIPO> &lista){

    if (lista.inicio==NULL)[
        return false;
    ]else{

    }

}*/
#endif // PLAYLIST_H_INCLUDED

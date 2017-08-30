#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
#include "TADFilaEncadeada.h"

struct TBanco{

    string cliente;

};

void imprimir(TFila <TBanco> &fila){

    TElementoF <TBanco> *nav=fila.inicio;
    while(nav!=NULL){
        cout<<"Nome: "<<nav->dado.cliente<< endl;
        nav=nav->proximo;
    }
}

#endif // BANCO_H_INCLUDED

#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
#include "TADPilhaEncadeada.h"

struct TBanco {

    string nome;

};

void imprimir(TPilha <TBanco> &pilha){

    TElementoP <TBanco> *nav=pilha.topo;
    while(nav!=NULL){
        cout<<"Nome: "<<nav->dado.nome<< endl;
        nav=nav->proximo;
    }
}

#endif // BANCO_H_INCLUDED

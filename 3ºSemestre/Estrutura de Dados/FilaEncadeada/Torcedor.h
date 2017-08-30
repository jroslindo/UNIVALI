#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
#include "TADFilaEncadeada.h"

struct Torcedor{

    int codigo;
    int unidadeTempo;
    string tipo;

};

/*void imprimir(TFila <TBanco> &fila){

    TElementoF <TBanco> *nav=fila.inicio;
    while(nav!=NULL){
        cout<<"Nome: "<<nav->dado.cliente<< endl;
        nav=nav->proximo;
    }
}*/

void printGuiches(int qtGuicheN, int qtGuincheS){

    int i;
    system("cls");
    cout<<"\n----------------NORMAL------------------"<<endl;
    for(i=0;i<qtGuicheN;i++){
        cout<<"\Dº"<<endl;
    }
    cout<<"----------------------------------------";
    cout<<"\n-----------------SOCIO------------------"<<endl;
    for(i=0;i<qtGuincheS;i++){
        cout<<"\Dº"<<endl;
    }
    cout<<"----------------------------------------";
}

#endif // BANCO_H_INCLUDED

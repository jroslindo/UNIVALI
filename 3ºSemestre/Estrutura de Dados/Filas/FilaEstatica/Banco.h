#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
#include "TADFilaEstatica.h"

struct TBanco{

    string nome;

};

template <typename TIPO, int MAX>
void imprimir(TFila <TIPO,MAX> &fila){

    int i;

    for(i=0;i<fila.quantidade;i++){
        cout <<"Nome: "<<fila.elementos[i].dado.nome<<endl;
    }

}

#endif // BANCO_H_INCLUDED

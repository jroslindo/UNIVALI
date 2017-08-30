#ifndef ESPECIFICO_H_INCLUDED
#define ESPECIFICO_H_INCLUDED
#include "TADFila.h"


struct Ttorcedor {

    int codigoTorcedor;
    int contadorUnidadeTempo;
    int tipo;
};

int tipoTorcedor(int total, int i){
    int socios = total * 0.05;

    if (i < socios){
        return 1;
    }else {
        return 0;
    }
}

int unidadeSocio(int socios, int i){
    socios*=0.85;

    if (i < socios || i==0){
        return 1;
    }else {
        return 2;
    }
}

int unidadeNormal(int normal, int i){

    int teste = normal * 0.25;

    if (i<teste){
        return 1;
    }
    normal = normal * 0.30;
    if (i >= teste && i < teste+normal){
        return 2;
    }

    return 3;

}


#endif // ESPECIFICO_H_INCLUDED

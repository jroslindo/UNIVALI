#include <iostream>

using namespace std;
#include "TADArvoreBinaria.h"
#include "TBanco.h"

int main()
{
    TArvore <TBanco> Bradesco;

    int chave1=200,chave2=300,chave3=400,chave4=500,chave5=100,chave6=250,chave7=350;
    TBanco cliente1,cliente2,cliente3,cliente4,cliente5,cliente6,cliente7;
    cliente1.nome="joao";
    cliente2.nome="gustavo";
    cliente3.nome="paulo";
    cliente4.nome="marcos";
    cliente5.nome="jose";
    cliente6.nome="tika";
    cliente7.nome="tiko";

    inicializar(Bradesco);
    inserir(Bradesco.raiz,chave2,cliente1);
    inserir(Bradesco.raiz,chave1,cliente2);
    inserir(Bradesco.raiz,chave3,cliente3);
    inserir(Bradesco.raiz,chave4,cliente4);
    inserir(Bradesco.raiz,chave5,cliente5);
    inserir(Bradesco.raiz,chave6,cliente6);
    inserir(Bradesco.raiz,chave7,cliente7);
    imprimir(Bradesco.raiz);
}


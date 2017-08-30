#include <iostream>

using namespace std;
#include "TADArvoreBinaria.h"

int main()
{

    TArvore <TPessoa> familia;

    inicializar(familia);

    TPessoa carinha1,carinha2,carinha3,carinha4,carinha5,carinha6,carinha7;

    carinha1.codigo = 7;
    carinha2.codigo = 8;
    carinha3.codigo = 4;
    carinha4.codigo = 3;
    carinha5.codigo = 2;
    carinha6.codigo = 10;
    carinha7.codigo = 6;

    inserirArvore(familia.raiz, carinha1);
    inserirArvore(familia.raiz, carinha2);
    inserirArvore(familia.raiz, carinha3);
    inserirArvore(familia.raiz, carinha4);
    inserirArvore(familia.raiz, carinha5);
    inserirArvore(familia.raiz, carinha6);
    inserirArvore(familia.raiz, carinha7);

    procuraRemover(familia.raiz, carinha3);
    imprimirArvore(familia.raiz);



}

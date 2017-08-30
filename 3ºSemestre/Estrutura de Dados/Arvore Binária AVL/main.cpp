#include <iostream>

using namespace std;
#include "TADArvoreBinaria.h"

int main()
{

    TArvore <TPessoa> familia;

    inicializar(familia);

    TPessoa carinha1,carinha2,carinha3,carinha4,carinha5,carinha6,carinha7;

    carinha1.codigo=50;
    carinha2.codigo=40;
    carinha3.codigo=60;
    carinha4.codigo=30;
    carinha5.codigo=31;
    carinha6.codigo=32;
    //carinha7.codigo=85;


    insere_avl(familia.raiz, carinha1);
    insere_avl(familia.raiz, carinha2);
    insere_avl(familia.raiz, carinha3);
    insere_avl(familia.raiz, carinha4);
    insere_avl(familia.raiz, carinha5);
    insere_avl(familia.raiz, carinha6);
    //insere_avl(familia.raiz, carinha7);



    imprimirArvore(familia.raiz);


}

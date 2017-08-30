#include <iostream>

using namespace std;
#include "TADHash.h"

int main()
{

    Thash *tabela[TAM];

    inicializa(tabela);

    inserir(tabela,1,1);
    inserir(tabela,1,2);
    inserir(tabela,2,1);
    remover(tabela,1);

    mostrar_hash(tabela);

}

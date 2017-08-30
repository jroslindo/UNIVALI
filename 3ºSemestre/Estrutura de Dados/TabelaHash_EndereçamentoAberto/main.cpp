#include <iostream>
#include "tabela.h"
#include "windows.h"
#define MAX 8
using namespace std;

int main()
{
    Tabela<int> tabela[MAX];
    Inicializa(tabela,MAX);
    int escolha=0, dado;
    while(escolha!=4){
        system("cls");
        cout<<"Escolha uma das seguintes opcoes:"<<endl;
        cout<<"1. Adicionar Elemento"<<endl;
        cout<<"2. Remover Elemento"<<endl;
        cout<<"3. Imprimir"<<endl;
        cout<<"4. Sair"<<endl;
        cin>>escolha;

        switch (escolha){
            case 1:
                inserir(tabela, MAX);
                break;

            case 2:
                remover(tabela, MAX);
                break;

            case 3:
                imprimir(tabela, MAX);
                break;
        }
    }
    return 0;
}

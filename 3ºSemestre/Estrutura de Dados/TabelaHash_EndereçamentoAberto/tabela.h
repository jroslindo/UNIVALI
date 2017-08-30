#ifndef TABELA_H_INCLUDED
#define TABELA_H_INCLUDED
#include "windows.h"

using namespace std;

template <typename TIPO>
struct Tabela{
    TIPO Elemento;
    char Situacao;
};

template <typename TIPO>
void Inicializa(Tabela<TIPO> t[], int tamanho){
    for(int i=0; i<tamanho; i++){
        t[i].Situacao='L';
    }
}

template <typename TIPO>
void inserir(Tabela<TIPO> t[], int tamanho){
    int dado;
    cout<<"Valor para inserir:"<<endl;
    cin>>dado;
    int pos = dado;
    int contador=0;
    int inserido=0;
    while(inserido==0){
        int hash = pos % tamanho;
        if (t[hash].Situacao=='L' || t[hash].Situacao=='R'){
            t[hash].Elemento=dado;
            t[hash].Situacao='O';
            inserido++;
            break;
        }
        pos++;
        contador++;
        if (contador>=tamanho){
            cout<<"\nTabela Cheia"<<endl;
            system("pause");
            break;
        }
    }
}

template <typename TIPO>
void remover(Tabela<TIPO> t[], int tamanho){
    int dado;
    cout<<"Valor para remover:"<<endl;
    cin>>dado;
    int pos = dado;
    int contador=0;
    int removido=0;
    while(removido==0){
        int hash = pos % tamanho;
        if(t[hash].Situacao=='O' && t[hash].Elemento==dado){
            t[hash].Situacao= 'R';
            removido++;
            break;
        }
        pos++;
        contador++;
        if (contador>=tamanho){
            cout<<"\nValor nao Encontrado"<<endl;
            removido++;
            system("pause");
            break;
        }
    }
}

template<typename TIPO>
void imprimir(Tabela<TIPO> t[],int tamanho){
    cout<<"\nTABELA"<<endl;
    cout<<"Posicao-Situcacao-Elemento"<<endl;
    for(int i=0;i<tamanho; i++){
        if(t[i].Situacao=='O'){
            cout<<i<<".\t"<<t[i].Situacao<<"\t"<<t[i].Elemento<<endl;
        }else{
            cout<<i<<".\t"<<t[i].Situacao<<"\tVazio"<<endl;
        }
    }
    cout<<endl;
    system("pause");
}

#endif // TABELA_H_INCLUDED

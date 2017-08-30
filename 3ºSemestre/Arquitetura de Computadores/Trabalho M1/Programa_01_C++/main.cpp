/////////////////////////////////////////////////////////////////
////////////UNIVERSIDADE DO VALE DO ITAJAI - UNIVALI/////////////
////////////GUSTAVO COPINI DECOL - JOAO PAULO ROSLINDO///////////
/////////////////////////////////////////////////////////////////
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int vetor_A[8]={0};
    int tamanho_vetor=0,i=0,soma=0;

    while(tamanho_vetor<=1 || tamanho_vetor>8){
        cout<<"Entre com o tamanho do vetor (max. 8): ";
        cin>>tamanho_vetor;
        if(tamanho_vetor<=1 || tamanho_vetor>8){
            cout<<"Valor invalido!!!"<<endl;
            system("pause");
            system("cls");
        }
    }
    cout<<"\n";

    while(i<tamanho_vetor){
        cout<<"Vetor_A["<<i<<"]: ";
        cin>>vetor_A[i];
        i++;
    }
    i=0;
    while(i<tamanho_vetor){
        soma+=vetor_A[i];
        i++;
    }
    cout<<"\n------------------------------------------------";
    cout<<"\nA soma de todos os elementos do vetor e "<<soma;
    cout<<"\n------------------------------------------------";
}

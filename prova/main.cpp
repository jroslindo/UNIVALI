#include <iostream>
#include "aluno.h"
#include <vector>
using namespace std;

int main()
{
    Aluno aux;
    Aluno criaAluno(){
        string nome;
        int codigo;
        cout<<"\nDigite Nome:";
        cin>>nome;
        //cout<<"\nNumero Camisa:";
        //cin>>camisa;
        Aluno aux;
        //aux.setCamisa(camisa);
        aux.setNome(nome);
        return aux;
    }

    vector<Aluno> Aluno;
    for (int i=1;i<=30;i++){
        Aluno aux = criaAluno();
        aux.setCodigo(i);
        codigo.push_back(aux);
    }

    cout<<"\n\nDigite o numero da camisa: ";
        int num;
        cin>>num;
        if (num <= jogadores.size() && num>= 1){
            cout<<"\n\nCamisa:"<<num;
            cout<<"\nNome do jogador"<<jogadores[num-1].getNome();
        }else{
            cout<<"\n\n FALHA: JOGADOR NAO ENCONTRADO!";
        }


}

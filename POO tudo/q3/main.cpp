#include <iostream>
#include <vector>
using namespace std;
#include "jogador.h"
//nao seria necessario implementar para a prova
Jogador criaJogador(){
    string nome;
    int camisa;
    cout<<"\nDigite Nome:";
    cin>>nome;
    //cout<<"\nNumero Camisa:";
    //cin>>camisa;
    Jogador aux;
    //aux.setCamisa(camisa);
    aux.setNome(nome);
    return aux;
}

int main()
{
    vector<Jogador> jogadores;
    for (int i=1;i<=2;i++){
        Jogador aux = criaJogador();
        aux.setCamisa(i);
        jogadores.push_back(aux);
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


    return 0;
}


#ifndef BARALHO_H_INCLUDED
#define BARALHO_H_INCLUDED
#include "TADListaEstatica.h"

struct TCarta{

    string naipe;
    int valor;

};

template <typename TIPO, int MAX>
void montaBaralho(Tlista <TIPO,MAX> &l){


    int c=1;


    for(c=1;c<=13;c++){
        l.elementos[l.quantidade].dado.valor=c;
        l.elementos[l.quantidade].dado.naipe="Ouro";
        l.quantidade++;
    }

    for(c=1;c<=13;c++){
        l.elementos[l.quantidade].dado.valor=c;
        l.elementos[l.quantidade].dado.naipe="Copas";
        l.quantidade++;
    }

    for(c=1;c<=13;c++){
        l.elementos[l.quantidade].dado.valor=c;
        l.elementos[l.quantidade].dado.naipe="Paus";
        l.quantidade++;
    }


    for(c=1;c<=13;c++){
        l.elementos[l.quantidade].dado.valor=c;
        l.elementos[l.quantidade].dado.naipe="Espadas";
        l.quantidade++;
    }




}

template <typename TIPO, int MAX>
void imprimeBaralho(Tlista <TIPO,MAX> &l){

    int i;

    for(i=0;i<l.quantidade;i++){
        cout <<"\n-------------------------------------";
        cout <<"\nValor: "<<l.elementos[i].dado.valor;
        cout <<"\nNaipe: "<<l.elementos[i].dado.naipe;
        cout <<"\n-------------------------------------";

    }

}

template <typename TIPO, int MAX>
void embaralha (Tlista <TIPO,MAX> &l){

    int qt=0,al1,al2,passou, n_vezes;

    TElemento <TIPO> e;

    srand (time(NULL));
    n_vezes=rand() % 1000+1;

    while(qt<=n_vezes){

        passou=0;
        al1=rand()% 52;
        al2=rand()% 52;

        if(al1==al2){
            passou++;
        }

        if(passou==0){
            e=l.elementos[al1];
            l.elementos[al1]=l.elementos[al2];
            l.elementos[al2]=e;
            qt++;
        }
    }
}

template <typename TIPO, int MAX>
void ordena(Tlista <TIPO,MAX> &l){

    int i=1,j=0, indice,fim=0, copas[13],espadas[13],ouro[13],c=0,es=0,o=0;

    TElemento <TIPO> e;

    while (i==1){ //ordena valor
        fim=0;
        for(j=0;j<52;j++){

        if(l.elementos[j+1].dado.valor < l.elementos[j].dado.valor) {
            e = l.elementos[j];
            l.elementos[j]=l.elementos[j+1];
            l.elementos[j+1]=e;
        }else{
            fim++;
        }
        if (fim == 52)
            i=0;
        }

    }



    for(i=0;i<52;i++){  //procura indice dos copas para trocar
        if(l.elementos[i].dado.naipe=="Copas"){
            copas[c]=i;
            c++;
        }
    }


    for(i=0;i<13;i++){ // faz a troca
       e =l.elementos[i];
       l.elementos[i]=l.elementos[copas[i]];
       l.elementos[copas[i]]= e;
    }


i=1;

    while (i==1){  // ordena
        fim=0;
        for(j=13;j<52;j++){

        if(l.elementos[j+1].dado.valor < l.elementos[j].dado.valor) {
            e = l.elementos[j];
            l.elementos[j]=l.elementos[j+1];
            l.elementos[j+1]=e;
        }else{
            fim++;
        }
        if (fim == 39)
            i=0;
        }
    }



    for(i=13;i<52;i++){  //procura ouro
        if(l.elementos[i].dado.naipe=="Ouro"){
            ouro[o]=i;
            o++;
        }
    }
    indice=0;
    for(i=13;i<26;i++){ // ordena ouro

       e=l.elementos[i];
       l.elementos[i]=l.elementos[ouro[indice]];
       l.elementos[ouro[indice]]= e;
       indice++;
    }

i=1;

    while (i==1){ // ordena
        fim=0;
        for(j=26;j<52;j++){

        if(l.elementos[j+1].dado.valor < l.elementos[j].dado.valor) {
            e = l.elementos[j];
            l.elementos[j]=l.elementos[j+1];
            l.elementos[j+1]=e;
        }else{
            fim++;
        }
        if (fim == 26)
            i=0;
        }
    }

    for(i=13;i<52;i++){ //procura espadas
        if(l.elementos[i].dado.naipe=="Espadas"){
            espadas[es]=i;
            es++;
        }
    }

    indice=0;
    for(i=26;i<39;i++){ // ordena espadas

       e=l.elementos[i];
       l.elementos[i]=l.elementos[espadas[indice]];
       l.elementos[espadas[indice]]= e;
       indice++;
    }
    i=1;
    while (i==1){ // ordena os restantes
        fim=0;
        for(j=39;j<52;j++){

        if(l.elementos[j+1].dado.valor < l.elementos[j].dado.valor) {
            e = l.elementos[j];
            l.elementos[j]=l.elementos[j+1];
            l.elementos[j+1]=e;
        }else{
            fim++;
        }
        if (fim == 13)
            i=0;
        }
    }


}

template <typename TIPO, int MAX, typename TIPO2, int MAX2, typename TIPO3, int MAX3>
void distribuiCartas (Tlista <TIPO,MAX> &l, Tlista <TIPO2,MAX2> &m1, Tlista <TIPO2,MAX2> &m2, Tlista <TIPO2,MAX2> &m3,Tlista <TIPO3,MAX3> &mesa){

    int i;

    for(i=0;i<2;i++){
        insereInicio(m1,l.elementos[0].dado);
        removeInicio(l);

        cout << endl << "Mao 1: " << m1.elementos[0].dado.naipe;
        cout << endl << "Mao 1: " << m1.elementos[0].dado.valor;

        insereInicio(m2,l.elementos[0].dado);
        removeInicio(l);

        cout << endl << "Mao 2: " << m2.elementos[0].dado.naipe;
        cout << endl << "Mao 2: " << m2.elementos[0].dado.valor;

        insereInicio(m3,l.elementos[0].dado);
        removeInicio(l);

        cout << endl << "Mao 3: " << m3.elementos[0].dado.naipe;
        cout << endl << "Mao 3: " << m3.elementos[0].dado.valor;

    }

    for(i=0;i<5;i++){

        insereInicio(mesa,l.elementos[0].dado);
        removeInicio(l);

        cout << endl;
        cout << endl << "MESA: " << mesa.elementos[0].dado.naipe;
        cout << endl << "MESA: " << mesa.elementos[0].dado.valor;
        cout << endl;
    }

}

#endif // BARALHO_H_INCLUDED

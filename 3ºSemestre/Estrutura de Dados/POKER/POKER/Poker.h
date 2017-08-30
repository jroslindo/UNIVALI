#ifndef POKER_H_INCLUDED
#define POKER_H_INCLUDED

struct carta{
    string naipe;
    int valor;
};

void montaBaralho(baralho &lista){

    int c=1;
    while (c<=52){
        if (c<=13){
            lista.cartas[lista.qtt].naipe= "ouro";
            lista.cartas[lista.qtt].valor= c;
            lista.qtt++;
        }
        if (c>13 && c<=26){
            c=c-13;
            lista.cartas[lista.qtt].naipe= "paus";
            lista.cartas[lista.qtt].valor= c;
            lista.qtt++;
            c=c+13;
        }
        if (c>26 && c<=39){
            c=c-26;
            lista.cartas[lista.qtt].naipe= "espadas";
            lista.cartas[lista.qtt].valor= c;
            lista.qtt++;
            c=c+26;
        }
        if (c>39 && c<=52){
            c=c-39;
            lista.cartas[lista.qtt].naipe= "copas";
            lista.cartas[lista.qtt].valor= c;
            lista.qtt++;
            c=c+39;
        }
    c++;
    }

}

void embaralha (baralho &lista){


    int qt=0,al1,al2,passou;
    carta aux;

    while(qt<=1000){

        passou=0;
        al1=rand()% 52;
        al2=rand()% 52;

        if(al1==al2){
            passou++;
        }

        if(passou==0){
            aux=lista.cartas[al1];
            lista.cartas[al1]=lista.cartas[al2];
            lista.cartas[al2]=aux;
            qt++;
        }
    }
}

void distribuiCartas (baralho &lista, baralho &mao1, baralho &mao2, baralho &mao3, baralho &mao4, baralho &deal, baralho &deal0){

    int i;

    for (i=0; i<2; i++){
        insereInicio(mao1, lista.cartas[0]);
        removeInicio(lista);

        cout << endl << "mao 1: " << mao1.cartas[0].naipe;
        cout << endl << "mao 1: " << mao1.cartas[0].valor;

        insereInicio(mao2, lista.cartas[0]);
        removeInicio(lista);

        cout << endl << "mao 2: " << mao2.cartas[0].naipe;
        cout << endl << "mao 2: " << mao2.cartas[0].valor;

        insereInicio(mao3, lista.cartas[0]);
        removeInicio(lista);

        cout << endl << "mao 3: " << mao3.cartas[0].naipe;
        cout << endl << "mao 3: " << mao3.cartas[0].valor;

    }

    for (i=0; i<3;i++){

        insereInicio(deal, lista.cartas[0]);
        removeInicio(lista);
        cout << endl;
        cout << endl << "MESA: " << deal.cartas[0].naipe;
        cout << endl << "MESA: " << deal.cartas[0].valor;

    }
}

void ordenaBubble(baralho &lista){

int i=1,j=0, indice,fim=0, copas[13],paus[13],espadas[13],ouro[13],c=0,p=0,e=0,o=0;
carta aux;

    while (i==1){ //ordena valor
        fim=0;
        for(j=0;j<52;j++){

        if(lista.cartas[j+1].valor < lista.cartas[j].valor) {
            aux = lista.cartas[j];
            lista.cartas[j]=lista.cartas[j+1];
            lista.cartas[j+1]=aux;
        }else{
            fim++;
        }
        if (fim == 52)
            i=0;
        }
    }



    for(i=0;i<52;i++){  //procura indice dos copas para trocar
        if(lista.cartas[i].naipe=="copas"){
            copas[c]=i;
            c++;
        }
    }


    for(i=0;i<13;i++){ // faz a troca
       aux=lista.cartas[i];
       lista.cartas[i]=lista.cartas[copas[i]];
       lista.cartas[copas[i]]= aux;
    }


i=1;

    while (i==1){  // ordena
        fim=0;
        for(j=13;j<52;j++){

        if(lista.cartas[j+1].valor < lista.cartas[j].valor) {
            aux = lista.cartas[j];
            lista.cartas[j]=lista.cartas[j+1];
            lista.cartas[j+1]=aux;
        }else{
            fim++;
        }
        if (fim == 39)
            i=0;
        }
    }



    for(i=13;i<52;i++){  //procura ouro
        if(lista.cartas[i].naipe=="ouro"){
            ouro[o]=i;
            o++;
        }
    }
    indice=0;
    for(i=13;i<26;i++){ // ordena ouro

       aux=lista.cartas[i];
       lista.cartas[i]=lista.cartas[ouro[indice]];
       lista.cartas[ouro[indice]]= aux;
       indice++;
    }

i=1;

    while (i==1){ // ordena
        fim=0;
        for(j=26;j<52;j++){

        if(lista.cartas[j+1].valor < lista.cartas[j].valor) {
            aux = lista.cartas[j];
            lista.cartas[j]=lista.cartas[j+1];
            lista.cartas[j+1]=aux;
        }else{
            fim++;
        }
        if (fim == 26)
            i=0;
        }
    }

    for(i=13;i<52;i++){ //procura espadas
        if(lista.cartas[i].naipe=="espadas"){
            espadas[e]=i;
            e++;
        }
    }

    indice=0;
    for(i=26;i<39;i++){ // ordena espadas

       aux=lista.cartas[i];
       lista.cartas[i]=lista.cartas[espadas[indice]];
       lista.cartas[espadas[indice]]= aux;
       indice++;
    }
    i=1;
    while (i==1){ // ordena os restantes
        fim=0;
        for(j=39;j<52;j++){

        if(lista.cartas[j+1].valor < lista.cartas[j].valor) {
            aux = lista.cartas[j];
            lista.cartas[j]=lista.cartas[j+1];
            lista.cartas[j+1]=aux;
        }else{
            fim++;
        }
        if (fim == 13)
            i=0;
        }
    }
}




#endif // POKER_H_INCLUDED

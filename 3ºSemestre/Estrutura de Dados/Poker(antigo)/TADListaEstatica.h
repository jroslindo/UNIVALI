#ifndef TADLISTAESTATICA_H_INCLUDED
#define TADLISTAESTATICA_H_INCLUDED
#define TAM 52

struct carta{

    string naipe;
    int valor;

};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct baralho{

    carta cartas[TAM];
    int quantidade;

};
///////////////////////////////////////////////////////INICIALIZAR//////////////////////////////////////////////////////////////
void Inicializar(baralho &lista){

    lista.quantidade=0;

}
///////////////////////////////////////////////////////INSERÇÃO/////////////////////////////////////////////////////////////////
void InsercaoFinal(baralho &lista, carta card){
    if(lista.quantidade<TAM){
        lista.cartas[lista.quantidade]=card;
        lista.quantidade++;
    }
}
///////////////////////////////////////////////////////REMOÇÃO///////////////////////////////////////////////////////////////////
void RemoveFinal(baralho &lista){
    if(lista.quantidade>0){
        lista.quantidade--;
    }
}
///////////////////////////////////////////////////////CONTA CARTAS/////////////////////////////////////////////////////////////////
void ContaCartas(baralho &lista){
    cout << lista.quantidade;
}
///////////////////////////////////////////////////////IMPRIME////////////////////////////////////////////////////////////////////
void ImprimiBaralho(baralho &lista){
    int i;
    for(i=0;i<lista.quantidade;i++){
        cout << "\nNaipe: "<< lista.cartas[i].naipe;
        cout << "\nValor: "<< lista.cartas[i].valor;
    }
}
///////////////////////////////////////////////////////REMOVER INICIO////////////////////////////////////////////////////////////////////
void removeInicio(baralho &lista){
    int i;
    for(i=1;i<lista.quantidade;i++){
        lista.cartas[i-1]=lista.cartas[i];
    }
    lista.quantidade--;
}
///////////////////////////////////////////////////////INSERIR INICIO//////////////////////////////////////////////////////////////////////////
void insereInicio(baralho &lista, carta card){
    int i;
    for(i=lista.quantidade;i>0;i--){
        lista.cartas[i]=lista.cartas[i-1];
    }
    lista.cartas[i]=card;
    lista.quantidade++;
}
///////////////////////////////////////////////////////INSERIR POSICAO///////////////////////////////////////////////////////////////////////////
void InsercaoPosicao(baralho &lista, carta card,int pos){
    int i;
    for(i=lista.quantidade;i>pos;i--){
        lista.cartas[i]=lista.cartas[i-1];
    }
    lista.cartas[pos]=card;
    lista.quantidade++;
}
///////////////////////////////////////////////////////REMOVER POSICAO///////////////////////////////////////////////////////////////////////////
void RemoverPosicao(baralho &lista, carta card,int pos){
    int i;
    for(i=pos+1;i<lista.quantidade;i++){
        lista.cartas[pos]=lista.cartas[pos+1];
    }
    lista.quantidade--;
}
///////////////////////////////////////////////////////MONTAR BARALHO S2 CARTAS///////////////////////////////////////////////////////////////////////////
void MontaBaralho(baralho &lista){

  int c=1;

    for(c=1;c<=13;c++){
        lista.cartas[lista.quantidade].naipe="Copas";
        lista.cartas[lista.quantidade].valor=c;
        lista.quantidade++;
    }

    for(c=1;c<=13;c++){
        lista.cartas[lista.quantidade].naipe="Espadas";
        lista.cartas[lista.quantidade].valor=c;
        lista.quantidade++;
    }

    for(c=1;c<=13;c++){
        lista.cartas[lista.quantidade].naipe="Ouro";
        lista.cartas[lista.quantidade].valor=c;
        lista.quantidade++;
    }

    for(c=1;c<=13;c++){
        lista.cartas[lista.quantidade].naipe="Paus";
        lista.cartas[lista.quantidade].valor=c;
        lista.quantidade++;
    }
}
///////////////////////////////////////////////////////EMBARALHAR///////////////////////////////////////////////////////////////////////////
void EmbaralhaBaralho(baralho &lista){

    int vet[52]={0},qt=0,al1,al2,passou,i;
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
///////////////////////////////////////////////////////DISTRIBUI CARTAS///////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////ORDERNAR BBSORT///////////////////////////////////////////////////////////////////////////
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

#endif // TADLISTAESTATICA_H_INCLUDED

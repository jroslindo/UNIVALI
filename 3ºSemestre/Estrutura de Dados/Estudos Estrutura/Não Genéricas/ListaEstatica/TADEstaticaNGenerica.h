#ifndef TADESTATICANGENERICA_H_INCLUDED
#define TADESTATICANGENERICA_H_INCLUDED
#define MAX 52

struct TCarta{

    string naipe;
    int valor;

};

struct TLista{

    TCarta cartas[MAX];
    int quantidade;

};

void inicializar(TLista &lista){

    lista.quantidade=0;

}

bool inserirFim(TLista &lista, TCarta card){

    if(lista.quantidade >= MAX){
        return false;
    }else{
        lista.cartas[lista.quantidade]=card;
        lista.quantidade++;
        return true;
    }

}

bool removerFim(TLista &lista){

    if(lista.quantidade <= 0){
        return false;
    }else{
        lista.quantidade--;
    }


}

bool inserirInicio(TLista &lista, TCarta card){


    if(lista.quantidade>=MAX){
        return false;
    }else{
        for(int i=lista.quantidade;i>0;i--){
            lista.cartas[i]=lista.cartas[i-1];
        }
        lista.cartas[0]=card;
        lista.quantidade++;
        return true;
    }

}

bool removerInicio(TLista &lista){

    if(lista.quantidade <= 0){
        return false;
    }else{
        for(int i=0;i<lista.quantidade;i++){
            lista.cartas[i]=lista.cartas[i+1];
        }
        lista.quantidade--;
        return true;
    }

}

bool inserirPosicao(TLista &lista,TCarta card, int p){

    if(lista.quantidade>=MAX){
        return false;
    }
    if(p==0){
        inserirInicio(lista,card);
        return true;
    }
    if(p==lista.quantidade){
        inserirFim(lista,card);
        return true;
    }else{
        for(int i=lista.quantidade;i>p;i--){
            lista.cartas[i]=lista.cartas[i-1];
        }
        lista.cartas[p]=card;
        lista.quantidade++;
        return true;
    }


}

bool removerPosicao(TLista &lista, int p){

    if(lista.quantidade <= 0){
        return false;
    }else{
        for(int i=p;i<lista.quantidade;i++){
            lista.cartas[i]=lista.cartas[i+1];
        }
        lista.quantidade--;
        return true;
    }

}

void imprimirBaralho(TLista &lista){

    for(int i=0;i<lista.quantidade;i++){
        cout<<"\n---------------------------------------------";
        cout<<"\nNaipe: "<<lista.cartas[i].naipe<<endl;
        cout<<"Valor: "<<lista.cartas[i].valor<<endl;
        cout<<"---------------------------------------------";
    }

}


#endif // TADESTATICANGENERICA_H_INCLUDED

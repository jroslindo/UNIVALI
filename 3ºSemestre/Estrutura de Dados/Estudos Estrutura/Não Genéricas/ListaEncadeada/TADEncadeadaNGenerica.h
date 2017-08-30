#ifndef TADENCADEADANGENERICA_H_INCLUDED
#define TADENCADEADANGENERICA_H_INCLUDED

struct TCarta{
    string naipe;
    int valor;
    TCarta *proximo;
};

struct TLista{
    TCarta *inicio;
};

TCarta *  novo_elemento_lista (TCarta card){

    TCarta * novo = new TCarta;

    novo -> naipe = card.naipe;
    novo -> valor = card.valor;
    novo -> proximo = NULL;

    return novo;
}

void imprimirBaralho(TLista &lista){

    TCarta *nav=lista.inicio;
    while(nav!=NULL){
        cout<<"\n--------------------------------------";
        cout<<"\nNaipe: "<<nav->naipe<<endl;
        cout<<"Valor: "<<nav->valor<<endl;
        cout<<"--------------------------------------";
        nav=nav->proximo;
    }
        delete(nav);
}

void inicializar(TLista &lista){

    lista.inicio=NULL;

}

bool inserirFim(TLista &lista, TCarta card){

    TCarta *novo=novo_elemento_lista(card);
    if(lista.inicio==NULL){
        lista.inicio=novo;
        return true;
    }else{
        TCarta *nav = lista.inicio;
        while(nav->proximo!=NULL){
            nav=nav->proximo;
        }
        nav->proximo=novo;
        return true;
    }
        delete(novo);
}

bool removerFim(TLista &lista){

    if(lista.inicio==NULL){
        return false;
    }else{
        TCarta *nav = lista.inicio;
        TCarta *ultimo;
        while(nav->proximo!=NULL){
            ultimo=nav;
            nav=nav->proximo;
        }
        ultimo->proximo=NULL;
        delete(nav);
        return true;
    }


}

bool inserirInicio(TLista &lista, TCarta card){

    TCarta *novo=novo_elemento_lista(card);
    if(lista.inicio==NULL){
        lista.inicio=novo;
        return true;
    }else{
        novo->proximo=lista.inicio;
        lista.inicio=novo;
        return true;
    }

}

bool removerInicio(TLista &lista){

    if(lista.inicio==NULL){
        return false;
    }else{
        TCarta *nav=lista.inicio;
        lista.inicio = nav->proximo;
        delete(nav);
        return true;
    }

}

int contaLista(TLista &lista){

    int c;
    TCarta *nav=lista.inicio;
    if(lista.inicio==NULL){
        return 0;
    }else{
        while(nav->proximo!=NULL){
            nav=nav->proximo;
            c++;
        }
        return c;
    }

}

bool inserirPosicao(TLista &lista, TCarta card, int p){

    int c=contaLista(lista);
    int i=0;
    TCarta *nav=lista.inicio;
    TCarta *anterior;
    TCarta *novo=novo_elemento_lista(card);
    if(p==0){
        inserirInicio(lista,card);
        return true;
    }
    if(p==c){
        inserirFim(lista,card);
        return true;
    }
    if(p>0 && p<c){
        while(i<p){
            anterior=nav;
            nav=nav->proximo;
            i++;
        }
        novo->proximo=nav;
        anterior->proximo=novo;
        return true;
    }else{
        return false;
    }

}

bool removerPosicao(TLista &lista, int p){

    int c=contaLista(lista),i=0;
    TCarta *anterior;
    TCarta *depois;
    TCarta *nav=lista.inicio;
    if(p==0){
        removerInicio(lista);
        return true;
    }
    if(p==c){
        removerFim(lista);
        return true;
    }
    if(p>0 && p<c){
        while(i<p){
            anterior=nav;
            nav=nav->proximo;
            depois=nav->proximo;
            i++;
        }
            anterior->proximo=depois;
            delete(nav);
            return true;
    }else{
        return false;
    }


}

#endif // TADENCADEADANGENERICA_H_INCLUDED

#ifndef TADLISTADUPLAMENTEENCADEADANGENERICA_H_INCLUDED
#define TCADLISTADUPLAMENTEENCADEADANGENERICA_H_INCLUDED

struct TCarta{
    string naipe;
    int valor;
    TCarta *anterior;
    TCarta *proximo;
};

struct TLista{
    TCarta *inicio;
    TCarta *fim;
};

TCarta *  novo_elemento_lista (TCarta card){

    TCarta * novo = new TCarta;

    novo -> naipe = card.naipe;
    novo -> valor = card.valor;
    novo -> proximo = NULL;
    novo -> anterior = NULL;

    return novo;
}

void imprimir(TLista &lista){

    TCarta *nav=lista.inicio;
    while(nav!=NULL){
        cout<<"\n-------------------------------------------";
        cout<<"\nNaipe: "<<nav->naipe;
        cout<<"\nValor: "<<nav->valor;
        cout<<"\n-------------------------------------------";
        nav=nav->proximo;
    }

}

void inicializar(TLista &lista){

    lista.inicio=NULL;
    lista.fim=NULL;

}

int contaLista(TLista &lista){

    int c=0;
    TCarta *nav=lista.inicio;
    while(nav->proximo!=NULL){
        nav=nav->proximo;
        c++;
    }
    return c;

}

bool inserirFim(TLista &lista, TCarta card){

    TCarta *novo=novo_elemento_lista(card);
    TCarta *nav=lista.inicio;
    if(lista.inicio==NULL){
        lista.inicio=novo;
        lista.fim=novo;
        return true;
    }else{
        while(nav->proximo!=NULL){
            nav=nav->proximo;
        }
        nav->proximo=novo;
        novo->anterior=nav;
        lista.fim=novo;
        return true;
    }

}

bool removerFim(TLista &lista){

    TCarta *nav=lista.inicio;
    TCarta *novoultimo;
    if(lista.inicio==NULL){
        return false;
    }else{
        while(nav->proximo!=NULL){
            novoultimo=nav;
            nav=nav->proximo;
        }
            novoultimo->proximo=NULL;
            lista.fim=novoultimo;
            delete(nav);
            return true;
    }

}

bool inserirInicio(TLista &lista, TCarta card){

    TCarta *novo=novo_elemento_lista(card);
    TCarta *nav=lista.inicio;
    if(lista.inicio==NULL){
        lista.inicio=novo;
        lista.fim=novo;
        return true;
    }else{
        nav->anterior=novo;
        novo->proximo=nav;
        lista.inicio=novo;
        return true;
    }

}

bool removerInicio(TLista &lista){

    TCarta *nav=lista.inicio;
    if(lista.inicio==NULL){
        return false;
    }else{
        lista.inicio=nav->proximo;
        nav->proximo->anterior=NULL;
        delete(nav);
        return true;
    }

}

bool inserirPosicao(TLista &lista, TCarta card, int p){

    int c=contaLista(lista),i=0;
    TCarta *nav=lista.inicio;
    TCarta *antes=lista.inicio;
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
            antes=nav;
            nav=nav->proximo;
            i++;
        }
        novo->proximo=nav;
        novo->anterior=antes;
        antes->proximo=novo;
        nav->anterior=novo;
        return true;
    }
}

bool removerPosicao(TLista &lista, int p){

    int c=contaLista(lista), i=0;
    TCarta *nav=lista.inicio;
    TCarta *antes;
    TCarta *depois;
    if(lista.inicio==NULL){
        return false;
    }
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
            antes=nav;
            nav=nav->proximo;
            depois=nav->proximo;
            i++;
        }
        antes->proximo=depois;
        depois->anterior=antes;
        delete(nav);
        return true;
    }


}

#endif // TADLISTADUPLAMENTEENCADEADANGENERICA_H_INCLUDED

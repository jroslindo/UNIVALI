#ifndef TADENCADEADANGENERICA_H_INCLUDED
#define TADENCADEADANGENERICA_H_INCLUDED

template<typename TIPO>
struct TElemento{
    TIPO dado;
    TElemento <TIPO> *proximo;
};

template<typename TIPO>
struct TLista{
    TElemento <TIPO> *inicio;
};

template <typename TIPO>
TElemento <TIPO> *  novo_elemento_lista (TIPO dado){

    TElemento <TIPO> * novo = new TElemento<TIPO>;

    novo -> dado = dado;
    novo -> proximo = NULL;

    return novo;
}

template<typename TIPO>
void inicializar(TLista <TIPO> &lista){

    lista.inicio=NULL;

}

template<typename TIPO>
bool inserirFim(TLista <TIPO> &lista, TIPO dado){

    TElemento <TIPO> *novo=novo_elemento_lista(dado);
    if(lista.inicio==NULL){
        lista.inicio=novo;
        return true;
    }else{
        TElemento <TIPO> *nav = lista.inicio;
        while(nav->proximo!=NULL){
            nav=nav->proximo;
        }
        nav->proximo=novo;
        return true;
    }
        delete(novo);
}

template<typename TIPO>
bool removerFim(TLista <TIPO> &lista){

    if(lista.inicio==NULL){
        return false;
    }else{
        TElemento <TIPO> *nav = lista.inicio;
        TElemento <TIPO> *ultimo;
        while(nav->proximo!=NULL){
            ultimo=nav;
            nav=nav->proximo;
        }
        ultimo->proximo=NULL;
        delete(nav);
        return true;
    }


}

template<typename TIPO>
bool inserirInicio(TLista <TIPO> &lista, TIPO dado){

    TElemento <TIPO> *novo=novo_elemento_lista(dado);
    if(lista.inicio==NULL){
        lista.inicio=novo;
        return true;
    }else{
        novo->proximo=lista.inicio;
        lista.inicio=novo;
        return true;
    }

}

template<typename TIPO>
bool removerInicio(TLista <TIPO> &lista){

    if(lista.inicio==NULL){
        return false;
    }else{
        TElemento <TIPO> *nav=lista.inicio;
        lista.inicio = nav->proximo;
        delete(nav);
        return true;
    }

}

template<typename TIPO>
bool inserirPosicao(TLista <TIPO> &lista, TIPO dado, int p){

    int c=contaLista(lista),i=0;
    TElemento <TIPO> *nav=lista.inicio;
    TElemento <TIPO> *anterior;
    TElemento <TIPO> *novo=novo_elemento_lista(dado);
    if(p==0){
        inserirInicio(lista,dado);
        return true;
    }
    if(p==c+1){
        inserirFim(lista,dado);
        return true;
    }
    if(p>0 && p<=c){
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

template<typename TIPO>
bool removerPosicao(TLista <TIPO> &lista, int p){

    int c=contaLista(lista),i=0;
    TElemento <TIPO> *anterior;
    TElemento <TIPO> *depois;
    TElemento <TIPO> *nav=lista.inicio;
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

template<typename TIPO>
void imprimirBaralho(TLista <TIPO> &lista){

    TElemento <TIPO> *nav=lista.inicio;
    while(nav!=NULL){
        cout<<"\n--------------------------------------";
        cout<<"\nNaipe: "<<nav->dado.naipe<<endl;
        cout<<"Valor: "<<nav->dado.valor<<endl;
        cout<<"--------------------------------------";
        nav=nav->proximo;
    }
        delete(nav);
}

template<typename TIPO>
int contaLista(TLista <TIPO> &lista){

    int c;
    TElemento <TIPO> *nav=lista.inicio;
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

#endif // TADENCADEADANGENERICA_H_INCLUDED

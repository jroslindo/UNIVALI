#ifndef TADFILA_H_INCLUDED
#define TADFILA_H_INCLUDED
/////////////////////
struct TBanco{   ////
                 ////
    string nome; ////
                 ////
};               ////
/////////////////////
template <typename TIPO>
struct TElemento{

    TIPO dado;
    TElemento <TIPO> *proximo;

};

template <typename TIPO>
struct TFila{

    TElemento <TIPO> *inicio;

};

template <typename TIPO>
void inicializa(TFila <TIPO> &fila){

    fila.inicio=NULL;

}

template <typename TIPO>
TElemento <TIPO> *encapsula_dado(TIPO dado){

    TElemento <TIPO> *novo = new TElemento <TIPO>;
    novo->dado = dado;
    novo->proximo = NULL;
    return novo;

}

template <typename TIPO>
void insereFila(TFila <TIPO> &fila, TIPO dado){

    TElemento <TIPO> *novo = encapsula_dado(dado);

    if(fila.inicio==NULL){
        fila.inicio=novo;
    }else{
        TElemento <TIPO> *nav = fila.inicio;
        while(nav->proximo!=NULL){
            nav=nav->proximo;
        }
        nav->proximo=novo;
    }

}

template <typename TIPO>
TIPO removerFila(TFila <TIPO> &fila){

    if(fila.inicio==NULL){
        cout<<"A fila esta vazia!!!"<<endl;
    }else{
        TElemento <TIPO> *remover = fila.inicio;
        TIPO armazenador;
        armazenador = remover->dado;
        fila.inicio = remover->proximo;
        delete(remover);
        return armazenador;
    }
}

void imprimirFila(TFila <TBanco> &fila){

    TElemento <TBanco> *nav = fila.inicio;

    while(nav!=NULL){
        cout<<nav->dado.nome<<endl;
        nav=nav->proximo;
    }

}

#endif // TADFILA_H_INCLUDED

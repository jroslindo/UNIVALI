#ifndef TADPILHA_H_INCLUDED
#define TADPILHA_H_INCLUDED
////////////////////////
struct TBanco{//////////
                ////////
    string nome;////////
////////////////////////
};//////////////////////

template <typename TIPO>
struct TElemento {

    TIPO dado;
    TElemento <TIPO> *proximo;

};

template <typename TIPO>
struct TPilha{

    TElemento <TIPO> *inicio;

};

template <typename TIPO>
void inicializar(TPilha <TIPO> &pilha){

    pilha.inicio=NULL;

}

template <typename TIPO>
TElemento <TIPO> *encapsulamento_dado(TIPO dado){

    TElemento <TIPO> *novo = new TElemento <TIPO>;
    novo->dado = dado;
    novo->proximo = NULL;
    return novo;

}

template <typename TIPO>
void inserirPilha(TPilha <TIPO> &pilha, TIPO dado){

    TElemento <TIPO> *novo = encapsulamento_dado(dado);

    novo->proximo = pilha.inicio;
    pilha.inicio = novo;

}

template <typename TIPO>
TIPO removerPilha (TPilha <TIPO> &pilha){

    TElemento <TIPO> *remover = pilha.inicio;
    TIPO armazenador;
    armazenador = remover->dado;
    pilha.inicio = remover->proximo;
    delete(remover);
    return armazenador;

}

void imprimir(TPilha <TBanco> &pilha){

    TElemento <TBanco> *nav = pilha.inicio;
    while(nav!=NULL){
        cout<<nav->dado.nome<<endl;
        nav=nav->proximo;
    }

}


#endif // TADPILHA_H_INCLUDED

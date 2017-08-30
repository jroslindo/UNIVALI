#ifndef TADPILHAENCADEADA_H_INCLUDED
#define TADPILHAENCADEADA_H_INCLUDED

template <typename TIPO>
struct TElementoP{

    TIPO dado;
    TElementoP <TIPO> *proximo;

};

template <typename TIPO>
struct TPilha{

    TElementoP <TIPO> *topo;

};

template <typename TIPO>
void inicializar(TPilha <TIPO> &pilha){

    pilha.topo=NULL;

}

template <typename TIPO>
TElementoP <TIPO> *novo_elemento_pilha(TIPO dado){

    TElementoP <TIPO> *novo=new TElementoP <TIPO>;
    novo->dado=dado;
    novo->proximo=NULL;
    return novo;

}

template <typename TIPO>
void push (TPilha <TIPO> &pilha, TIPO dado){

    TElementoP <TIPO> *novo=novo_elemento_pilha(dado);
    if(pilha.topo==NULL){
        pilha.topo=novo;
    }else{
        novo->proximo=pilha.topo;
        pilha.topo=novo;
    }
}

template <typename TIPO>
TIPO pop (TPilha <TIPO> &pilha){

    TIPO dado=pilha.topo->dado;
    TElementoP <TIPO> *referencia=pilha.topo;
    pilha.topo=pilha.topo->proximo;
    delete(referencia);
    return dado;

}

#endif // TADPILHAENCADEADA_H_INCLUDED

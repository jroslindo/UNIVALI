#ifndef TADARVOREBINARIA_H_INCLUDED
#define TADARVOREBINARIA_H_INCLUDED
#include <stdlib.h>
#include <time.h>

struct TPessoa{

    int codigo;

};

template <typename TIPO>
struct TNo{

    TIPO dado;
    TNo <TIPO> *direita;
    TNo <TIPO> *esquerda;

};

template <typename TIPO>
struct TArvore{

    TNo <TIPO> *raiz;

};

template <typename TIPO>
void inicializar (TArvore <TIPO> &no){

    no.raiz = NULL;

}

template <typename TIPO>
void inserirArvore (TNo <TIPO> *&no, TIPO dado){

    if(no==NULL){
        TNo <TIPO> *novo  = new TNo <TIPO>;
        novo->dado = dado;
        novo->direita = NULL;
        novo->esquerda = NULL;
        no = novo;
    }else{
        if(dado.codigo > no->dado.codigo){
            inserirArvore(no->direita, dado);
        }else{
            if(dado.codigo < no->dado.codigo){
                inserirArvore(no->esquerda, dado);
            }
        }
    }

}

template <typename TIPO>
void procuraRemover (TNo <TIPO> *&no, TIPO chave){

    if(no!=NULL){
        if(no->dado.codigo == chave.codigo){
            remover(no);
        }else{
            if(chave.codigo > no->dado.codigo){
                procuraRemover(no->direita,chave);
            }else{
                if(chave.codigo < no->dado.codigo){
                    procuraRemover(no->esquerda,chave);
                }
            }
        }
    }

}

template <typename TIPO>
void remover (TNo <TIPO> *&no){

    TNo <TIPO> *apagar = no;
    TNo <TIPO> *maior = no->esquerda;

    if(maior==NULL){
        no=no->direita;
        delete(apagar);
        return;
    }

    TNo <TIPO> *pai = NULL;
    while(maior->direita!=NULL){
        pai = maior;
        maior = maior->direita;
    }

    maior->direita = no->direita;
    if(pai!=NULL){
        pai->direita = maior->esquerda;
        maior->esquerda = no->esquerda;
    }

    apagar = no;
    no = maior;
    delete (apagar);


}

template <typename TIPO>
void imprimirArvore(TNo <TIPO> *&no){

    if(no!=NULL){
        cout<<no->dado.codigo<<endl;
        imprimirArvore(no->esquerda);
        imprimirArvore(no->direita);
    }

}

#endif // TADARVOREBINARIA_H_INCLUDED

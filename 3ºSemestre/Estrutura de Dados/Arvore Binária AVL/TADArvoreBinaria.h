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
    int bal;
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
void imprimirArvore(TNo <TIPO> *&no){

    if(no!=NULL){
        cout<<no->dado.codigo<<endl;
        imprimirArvore(no->esquerda);
        imprimirArvore(no->direita);
    }

}

template <typename TIPO>
int insere_avl (TNo <TIPO> *&no, TIPO dado){

    if (no== NULL){
        no = new TNo <TIPO>;
       // no->chave=chave;
        no->dado=dado;
        no->bal = 0;
        no->esquerda = NULL;
        no->direita = NULL;
        return 1;
    }else{
        if(dado.codigo > no->dado.codigo){
            int n = insere_avl(no->direita, dado);
            no->bal = no->bal +n;
            if(no->bal > 1){
                    if(no->direita->dado.codigo > dado.codigo){
                        RL(no);
                    }else{
                        RR(no);
                    }
                    return 0;
            }else{
                if(no->bal==0){
                    return 0;
                }else{
                    return 1;
                }
            }
        }else{
            if(dado.codigo < no->dado.codigo){
                int n = insere_avl(no->esquerda, dado);
                no->bal = no->bal-n;
                if(no->bal < -1){
                        if(no->esquerda->dado.codigo < dado.codigo){
                            LR(no);
                        }else{
                            LL(no);
                        }
                        return 0;
                }else{
                    if(no->bal==0){
                        return 0;
                    }else{
                        return 1;
                    }
                }
            }
        }
    }
}
template <typename TIPO>
void LL (TNo <TIPO> *&no){


    TNo <TIPO> *b=no;

    TNo <TIPO> *a = no->esquerda;

    b->esquerda = a->direita;
    a->direita = b;

    a->bal =0;
    b->bal =0;

    no=a;

}

template <typename TIPO>
void LR (TNo <TIPO> *&no){

    TNo <TIPO> *c = no;

    TNo <TIPO> *a = c->esquerda;

    TNo <TIPO> *b = a->direita;

    c->esquerda = b->direita;
    a->direita = b->esquerda;
    b->esquerda = a;
    b->direita = c;

    no = b;

    switch (b->bal){
    case -1:
        a->bal = 0;
        c->bal = 1;
    break;
    case 0:
        a->bal = 0;
        c->bal = 0;
    break;
    case +1:
        a->bal = -1;
        c->bal = 0;
    break;
    }

    b->bal =0;
}

template <typename TIPO>
void RR (TNo <TIPO> *&no){


    TNo <TIPO> *b=no;

    TNo <TIPO> *a = no->direita;

    b->direita = a->esquerda;
    a->esquerda = b;

    a->bal =0;
    b->bal =0;

    no=a;

}

template <typename TIPO>
void RL (TNo <TIPO> *&no){

    TNo <TIPO> *c = no;

    TNo <TIPO> *a = c->direita;

    TNo <TIPO> *b = a->esquerda;

    //c->direita = b->esquerda;
    a->esquerda = b->direita;
    b->esquerda = a;
    b->esquerda = c;

    no = b;

    switch (b->bal){
    case -1:
        a->bal = 0;
        c->bal = 1;
    break;
    case 0:
        a->bal = 0;
        c->bal = 0;
    break;
    case +1:
        a->bal = -1;
        c->bal = 0;
    break;
    }

    b->bal =0;
}

#endif // TADARVOREBINARIA_H_INCLUDED

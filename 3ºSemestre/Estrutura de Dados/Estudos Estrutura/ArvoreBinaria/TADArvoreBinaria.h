#ifndef TADARVOREBINARIA_H_INCLUDED
#define TADARVOREBINARIA_H_INCLUDED

template <typename TIPO>
struct TNo{

    int chave;
    TIPO dado;
    TNo <TIPO> * direita;
    TNo <TIPO> * esquerda;

};

template <typename TIPO>
struct TArvore{

    TNo <TIPO> * raiz;

};

template <typename TIPO>
void inicializar(TArvore <TIPO> &no){

    no.raiz=NULL;

}

template <typename TIPO>
void inserir(TNo <TIPO> *&no,int chave, TIPO dado){

    if(no==NULL){
        no = new TNo <TIPO>;
        no->dado=dado;
        no->chave=chave;
        no->esquerda=NULL;
        no->direita=NULL;
    }else{
        if(chave > no->chave){
            inserir(no->direita,chave,dado);
        }else{
            if(chave < no->chave){
                inserir(no->esquerda,chave,dado);
            }
        }
    }
}

template <typename TIPO>
void imprimir(TNo <TIPO> *&no){

    if(no!=NULL){
        cout<<"\n------------------------";
        cout<<"\nNome: "<<no->dado.nome;
        cout<<"\nChave: "<<no->chave;
        cout<<"\n------------------------";
        imprimir(no->esquerda);
        imprimir(no->direita);
    }

}

template <typename TIPO>
void removerRaiz(TNo <TIPO> *&no){

    if(no!=NULL){

    }else{


    }

}

#endif // TADARVOREBINARIA_H_INCLUDED

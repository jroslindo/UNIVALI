#ifndef TADPILHA_H_INCLUDED
#define TADPILHA_H_INCLUDED

struct TBanco{

    string nome;

};

template <typename TIPO>
struct TElemento{

    TIPO dado;

};

template <typename TIPO, int MAX>
struct TPilha{

    TElemento <TIPO> elementos[MAX];
    int quantidade;

};

template <typename TIPO, int MAX>
void inicializar (TPilha <TIPO,MAX> &pilha){

    pilha.quantidade = 0;

}

template <typename TIPO, int MAX>
void push (TPilha <TIPO,MAX> &pilha, TIPO dado){

    for(int i=pilha.quantidade;i>0;i--){
        pilha.elementos[i].dado = pilha.elementos[i-1].dado;
    }
    pilha.elementos[0].dado = dado;
    pilha.quantidade++;
}

template <typename TIPO, int MAX>
TIPO pop (TPilha <TIPO,MAX> &pilha){

    TIPO armazenador;
    armazenador = pilha.elementos[0].dado;

    for(int i=0;i<pilha.quantidade-1;i++){
        pilha.elementos[i] = pilha.elementos[i+1];
    }

    pilha.quantidade--;
    return armazenador;

}

template <typename TIPO, int MAX>
void imprimir (TPilha <TIPO,MAX> &pilha){

    for(int i=0;i<pilha.quantidade;i++){
        cout<<pilha.elementos[i].dado.nome<<endl;
    }

}


#endif // TADPILHA_H_INCLUDED

#ifndef TADPILHAESTATICA_H_INCLUDED
#define TADPILHAESTATICA_H_INCLUDED


template <typename TIPO>
struct TElementoP{

    TIPO dado;

};

template <typename TIPO, int MAX>
struct TPilha{

    TElementoP <TIPO> elementos[MAX];
    int quantidade;

};

template <typename TIPO, int MAX>
void inicializar(TPilha <TIPO,MAX> &pilha){

    pilha.quantidade=0;

}

template <typename TIPO, int MAX>
bool push(TPilha <TIPO,MAX> &pilha, TIPO dado){

    if(pilha.quantidade>=MAX){
        return false;
    }else{
        for(int i=pilha.quantidade;i>0;i--){
            pilha.elementos[i]=pilha.elementos[i-1];
        }
        TElementoP <TIPO> e;
        e.dado=dado;
        pilha.elementos[0]=e;
        pilha.quantidade++;
        return true;
    }

}

template <typename TIPO, int MAX>
TIPO pop(TPilha <TIPO,MAX> &pilha){

        if(pilha.quantidade!=0){
            TIPO dado=pilha.elementos[0].dado;
            for(int i=0;i<pilha.quantidade;i++){
                pilha.elementos[i]=pilha.elementos[i+1];
            }
            pilha.quantidade--;
            return dado;
        }else{
            return false;
        }


}
#endif // TADPILHAESTATICA_H_INCLUDED

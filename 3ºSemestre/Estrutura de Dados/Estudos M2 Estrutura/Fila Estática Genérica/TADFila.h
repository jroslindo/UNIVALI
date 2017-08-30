#ifndef TADFILA_H_INCLUDED
#define TADFILA_H_INCLUDED

struct TBanco{

    string nome;

};

template <typename TIPO>
struct TElemento{

    TIPO dado;

};

template <typename TIPO, int MAX>
struct TFila{

    TElemento <TIPO> elementos[MAX];
    int quantidade;

};

template <typename TIPO, int MAX>
void inicializar(TFila <TIPO,MAX> &fila){

    fila.quantidade=0;

}

template <typename TIPO, int MAX>
void inserirFila(TFila <TIPO,MAX> &fila, TIPO dado){

    fila.elementos[fila.quantidade].dado=dado;
    fila.quantidade++;

}

template <typename TIPO, int MAX>
TIPO removerFila(TFila <TIPO,MAX> &fila){

    if(fila.quantidade==0){
        cout<<"Fila Vazia!!!"<<endl;
    }else{
        TIPO retorno = fila.elementos[0].dado;
        for(int i=0;i<fila.quantidade;i++){
            fila.elementos[i].dado=fila.elementos[i+1].dado;
        }
        fila.quantidade--;
        return retorno;
    }

}

template <typename TIPO, int MAX>
void imprimir (TFila <TIPO,MAX> &fila){

    for(int i=0;i<fila.quantidade;i++){
        cout<<fila.elementos[i].dado.nome;
    }

}

#endif // TADFILA_H_INCLUDED

#ifndef TADFILAESTATICA_H_INCLUDED
#define TADFILAESTATICA_H_INCLUDED

template <typename TIPO>
struct TElementoF{

    TIPO dado;

};

template <typename TIPO, int MAX>
struct TFila{

    TElementoF <TIPO> elementos[MAX];
    int quantidade;

};

template <typename TIPO, int MAX>
void inicicializar(TFila <TIPO,MAX> &fila){

    fila.quantidade=0;

}

template <typename TIPO, int MAX>
void queued(TFila <TIPO,MAX> &fila, TIPO dado){

    fila.elementos[fila.quantidade].dado=dado;
    fila.quantidade++;

}

template <typename TIPO, int MAX>
TIPO unqueued(TFila <TIPO,MAX> &fila){

    int i;

    if(fila.quantidade!=0){
        TIPO e = fila.elementos[0].dado;
        for(i=0;i<fila.quantidade;i++){
            fila.elementos[i].dado=fila.elementos[i+1].dado;
        }
        fila.quantidade--;
        return e;
    }

}

#endif // TADFILAESTATICA_H_INCLUDED

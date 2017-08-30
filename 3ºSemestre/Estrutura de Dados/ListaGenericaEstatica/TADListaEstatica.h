#ifndef TADLISTAESTATICA_H_INCLUDED
#define TADLISTAESTATICA_H_INCLUDED

template <typename TIPO>
struct TElemento{

    TIPO dado;

};

template <typename TIPO, int MAX>
struct Tlista{

    TElemento <TIPO> elementos[MAX];
    int quantidade;

};

template <typename TIPO, int MAX>
void inicializar(Tlista <TIPO,MAX> &l){

    l.quantidade=0;

}

template <typename TIPO, int MAX>
bool inserirFim(Tlista <TIPO,MAX> &l, TIPO dado){

    if(l.quantidade >= MAX){
        return false;
    }else{
        TElemento <TIPO> e;
        e.dado=dado;
        l.elementos[l.quantidade]=e;
        l.quantidade++;
        return true;
    }
}

template <typename TIPO, int MAX>
bool removeFim(Tlista <TIPO,MAX> &l){

    if(l.quantidade == 0){
        return false;
    }else{
        l.quantidade--;
        return true;
    }
}

template <typename TIPO, int MAX>
bool insereInicio(Tlista <TIPO,MAX> &l, TIPO dado){

    if(l.quantidade >= MAX){
        return false;
    }else{
        int i;
        TElemento <TIPO> e;
        for(i=l.quantidade;i>0;i--){
            l.elementos[i]=l.elementos[i-1];
        }
        e.dado=dado;
        l.elementos[0]=e;
        l.quantidade++;
        return true;

    }
}

template <typename TIPO, int MAX>
bool removeInicio(Tlista <TIPO,MAX> &l){

    if(l.quantidade == 0){
        return false;
    }else{
        int i;
        for(i=1;i<l.quantidade;i++){
            l.elementos[i-1]=l.elementos[i];
        }
        l.quantidade--;
        return true;
    }

}

template <typename TIPO, int MAX>
bool inserePosicao(Tlista <TIPO,MAX> &l, TIPO dado, int pos){

    if(l.quantidade >= MAX){
        return false;
    }else{
        int i;
        TElemento <TIPO> e;
        for(i=l.quantidade;i>pos;i--){
            l.elementos[i]=l.elementos[i-1];
        }
        e.dado=dado;
        l.elementos[pos]=e;
        l.quantidade++;
        return true;
    }
}

template <typename TIPO, int MAX>
bool removePosicao(Tlista <TIPO,MAX> &l, int pos){

    if(l.quantidade == 0){
        return false;
    }else{
        int i;
        for(i=pos+1;i<l.quantidade;i++){
            l.elementos[pos]=l.elementos[pos+1];
        }
        l.quantidade--;
    }

}


#endif // TADLISTAESTATICA_H_INCLUDED

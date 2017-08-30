#ifndef TADLISTAESTATICAGENERICA_H_INCLUDED
#define TADLISTAESTATICAGENERICA_H_INCLUDED

template<typename TIPO>
struct TElemento{

    TIPO dado;

};

template<typename TIPO, int MAX>
struct TLista{

    TElemento <TIPO> elementos[MAX];
    int quantidade;

};

template<typename TIPO, int MAX>
void inicializar(TLista <TIPO,MAX> &lista){

    lista.quantidade=0;

}

template<typename TIPO, int MAX>
bool inserirFim(TLista <TIPO,MAX> &lista, TIPO dado){

    if(lista.quantidade >= MAX){
        return false;
    }else{
        TElemento <TIPO> e;
        e.dado=dado;
        lista.elementos[lista.quantidade].dado=dado;
        lista.quantidade++;
        return true;
    }

}

template<typename TIPO, int MAX>
bool removerFim(TLista <TIPO,MAX> &lista){

    if(lista.quantidade <= 0){
        return false;
    }else{
        lista.quantidade--;
        return true;
    }


}

template<typename TIPO, int MAX>
bool inserirInicio(TLista <TIPO,MAX> &lista, TIPO dado){

    if(lista.quantidade>=MAX){
        return false;
    }else{
        for(int i=lista.quantidade;i>0;i--){
            lista.elementos[i]=lista.elementos[i-1];
        }
        TElemento <TIPO> e;
        e.dado=dado;
        lista.elementos[0]=e;
        lista.quantidade++;
        return true;
    }

}

template<typename TIPO, int MAX>
bool removerInicio(TLista <TIPO,MAX> &lista){

    if(lista.quantidade <= 0){
        return false;
    }else{
        for(int i=0;i<lista.quantidade;i++){
            lista.elementos[i]=lista.elementos[i+1];
        }
        lista.quantidade--;
        return true;
    }

}

template<typename TIPO, int MAX>
bool inserirPosicao(TLista <TIPO,MAX> &lista,TIPO dado, int p){

    if(lista.quantidade>=MAX){
        return false;
    }
    if(p==0){
        inserirInicio(lista,dado);
        return true;
    }
    if(p==lista.quantidade){
        inserirFim(lista,dado);
        return true;
    }else{
        for(int i=lista.quantidade;i>p;i--){
            lista.elementos[i]=lista.elementos[i-1];
        }
        TElemento <TIPO> e;
        e.dado=dado;
        lista.elementos[p]=e;
        lista.quantidade++;
        return true;
    }


}

template<typename TIPO, int MAX>
bool removerPosicao(TLista <TIPO,MAX> &lista, int p){

    if(lista.quantidade <= 0){
        return false;
    }else{
        for(int i=p;i<lista.quantidade;i++){
            lista.elementos[i]=lista.elementos[i+1];
        }
        lista.quantidade--;
        return true;
    }

}

template <typename TIPO,int MAX>
void imprimirBaralho(TLista <TIPO,MAX> &lista){

    for(int i=0;i<lista.quantidade;i++){
        cout<<"\n---------------------------------------------";
        cout<<"\nNaipe: "<<lista.elementos[i].dado.naipe<<endl;
        cout<<"Valor: "<<lista.elementos[i].dado.valor<<endl;
        cout<<"---------------------------------------------";
    }

}


#endif // TADLISTAESTATICAGENERICA_H_INCLUDED

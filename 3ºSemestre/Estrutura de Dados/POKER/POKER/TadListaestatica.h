#ifndef TADLISTAESTATICA_H_INCLUDED
#define TADLISTAESTATICA_H_INCLUDED

template <typename TIPO>
struct TElemento{
    TIPO dado;
};

template <typename TIPO, int MAX>
struct Tlista{
    TElemento <TIPO> elementos[MAX];
    int qtt;
};


template <typename TIPO, int MAX>
 void inicializar (Tlista<TIPO,MAX> &lista){
 lista.qtt=0;
}

template <typename TIPO, int MAX>
void insercaoFinal (Tlista<TIPO,MAX> &lista, TIPO dado){

   lista.TLista[lista.qtt]=dado;
   lista.qtt++;
}

template <typename TIPO, int MAX>
void contaCartas (Tlista<TIPO,MAX> &lista){

    cout << "numero de cartas:" << lista.qtt;
}

template <typename TIPO, int MAX>
void imprimeLista (Tlista<TIPO,MAX>){
    int num;
    for (num=0; num<lista.qtt; num++){
        cout << "\nnaipe:" << lista.Tlista[num].naipe;
        cout << "\nvalor " << lista.Tlista[num].valor;
    }

}

void removedorFinal (baralho &lista){
    lista.qtt--;
}

void removeInicio (baralho &lista){
    int i;

    for (i=1; i<lista.qtt; i++){
        lista.cartas[i-1]=lista.cartas[i];
    }
lista.qtt--;
}

void insereInicio (baralho &lista,int n){
    int i;

    for (i=lista.qtt; i>0; i--){
        lista.cartas[i]=lista.cartas[i-1];
    }
    lista.cartas[0]= lista.carta[n];
    lista.qtt++;
}

void inserePosi (baralho &lista, carta card,int posicao){

    int i;

    for (i=lista.qtt; i>posicao; i--){

        lista.cartas[i]=lista.cartas[i-1];
    }
    lista.cartas[posicao]= card;
    lista.qtt++;

}

void removePosicao( baralho &lista, int posicao){
int i;

    for (i=posicao+1; i<lista.qtt; i++){

        lista.cartas[posicao]= lista.cartas[posicao+1];
    }
    lista.qtt--;
}


#endif // TADLISTAESTATICA_H_INCLUDED

#ifndef TADFILAENCADEADA_H_INCLUDED
#define TADFILAENCADEADA_H_INCLUDED

template <typename TIPO>
struct TElementoF{

    TIPO dado;
    TElementoF <TIPO> *proximo;

};

template <typename TIPO>
struct TFila{

    TElementoF <TIPO> * inicio;
    int quantidade;

};

template <typename TIPO>
TElementoF <TIPO> *novo_elemento_dado(TIPO dado){

    TElementoF <TIPO> *novo= new TElementoF <TIPO>;
    novo->dado=dado;
    novo->proximo=NULL;
    return novo;

}

template <typename TIPO>
void inicializar(TFila <TIPO> &fila){

    fila.inicio=NULL;

}

template <typename TIPO>
void entrar_na_fila(TFila <TIPO> &fila, TIPO dado){

    fila.quantidade++;
    TElementoF <TIPO> *novo=novo_elemento_dado(dado);
    if(fila.inicio==NULL){
        fila.inicio=novo;
    }else{
    TElementoF <TIPO> *nav=fila.inicio;
    while(nav->proximo!=NULL){
        nav=nav->proximo;
    }
    nav->proximo=novo;
    }

}

template <typename TIPO>
TIPO atender(TFila <TIPO> &fila){

    fila.quantidade--;
    TIPO armazenador;
    TElementoF <TIPO> *remover=fila.inicio;

    if(fila.inicio==NULL){
        cout << "A fila esta vazia!!!"<<endl;
    }else{
        armazenador=remover->dado;
        fila.inicio=remover->proximo;
        delete(remover);
        return armazenador;
    }

}

template <typename TIPO>
int tipoTorcedor(TFila <TIPO> &fila){

    srand(time(NULL));

    int randon;

    randon = rand()%100+1;

    if(randon <= 5){
        return 1;     ///SOCIO
    }else{
        return 0;     ///NORMAL
    }

}

#endif // TADFILAENCADEADA_H_INCLUDED

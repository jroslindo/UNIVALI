#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED

struct TBanco{

    string nome;

};

template <typename TIPO, int MAX>
void imprimir(TPilha <TIPO,MAX> &pilha){

    int i;

    for(i=0;i<pilha.quantidade;i++){
        cout <<"Nome: "<<pilha.elementos[i].dado.nome<<endl;
    }

}

#endif // BANCO_H_INCLUDED

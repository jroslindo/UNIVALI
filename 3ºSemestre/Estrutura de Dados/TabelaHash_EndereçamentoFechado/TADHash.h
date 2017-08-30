#ifndef TADHASH_H_INCLUDED
#define TADHASH_H_INCLUDED

const int TAM=8;

struct Thash{
    int chave;
    Thash *prox;
};

int funcao_hashing(int num){
    return num % TAM;
}

void mostrar_hash(Thash* tabela[]){
    Thash *aux;
    for(int i=0; i< TAM; i++){
        aux = tabela[i];
        while(aux!=NULL){
            cout <<"\nEntrada"<< i << ": " << aux->chave;
            aux = aux->prox;
        }
    }
}

void inicializa(Thash* tabela[]){
    for(int i=0; i<TAM; i++){
        tabela[i] = NULL;
    }
}

void inserir (Thash* tabela[], int pos, int num){
    Thash *novo;
    novo = new Thash{};
    novo->chave = num;
    novo->prox = tabela[pos];
    tabela[pos] = novo;
}

void remover (Thash* tabela[], int num){
    int pos = funcao_hashing(num);
    Thash *aux;

    if(tabela[pos]!=NULL){
        if(tabela[pos]->chave==num){
            aux = tabela[pos];
            tabela[pos] = tabela[pos]->prox;
            delete aux;
        }else{
            aux = tabela[pos]->prox;
            Thash *ant= tabela[pos];
            while(aux!=NULL && aux->chave!=num){
                ant = aux;
                ant = aux->prox;
            }
            if(aux!=NULL){
                ant->prox = aux->prox;
                delete aux;
            }else{
                cout <<"\nNumero nao encontrado.";
            }
        }
    }else{
        cout <<"\nNumero nao encontrado.";
    }
}
#endif // TADHASH_H_INCLUDED

#include <iostream>
#define TAM 5

using namespace std;

template <typename X>

void ler(X vetor[TAM]){

int i;

    for(i=0;i<TAM;i++){
        cin >> vetor[i];
    }
}

template <typename X>

void escrever(X vetor[TAM]){

int i;

    for(i=0;i<TAM;i++){

        cout << vetor[i];
    }

}

int main()
{
    /*int vet[TAM];
    ler(vet);
    escrever(vet);
    */
    string vet1[TAM];
    ler(vet1);
    escrever(vet1);

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1 - Utilizando aloca��o din�mica, declare um vetor de N inteiros (onde N � um valor fornecido pelo usu�rio), leia um valor para cada posi��o e no final mostre a m�dia, o menor e o maior valor contidos no vetor.//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int mai=0,men=0,i,TAM;
    float tmed=0,med =0;

    printf("Tamanho: ");
    scanf("%d",&TAM);

    int *vet;
    vet = malloc(TAM * sizeof(int));

    for (i=0; i<TAM; i++){
        printf("Digite um valor: ");
        scanf("%d",&vet[i]);
    }
    mai=vet[0];
    men=vet[0];
    for (i=0; i<TAM; i++){
        tmed+=vet[i];
            if (vet[i] > mai)
                mai=vet[i];
            else
                if (vet[i] < men)
                    men=vet[i];
    }
    med = tmed/TAM;
    free(vet);
    printf("\nA m�dia � %.2f, o menor � %d e o maior � %d",med,men,mai);


    return 0;
}


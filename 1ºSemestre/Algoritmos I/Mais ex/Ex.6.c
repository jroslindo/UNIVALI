//6.	Faça uma função que recebe por parâmetro dois valores inteiros e positivos que serão a base e o expoente. A função deve calcular e retornar o resultado da base elevado ao expoente (potencia).

#include <stdio.h>
#include <locale.h>

int potencia(int base, int exp){
    int pot = base, i;
    for (i=1; i<exp; i++){
        pot = base * pot;
    }
    return pot;
}

int main() {
    setlocale(LC_ALL,"Portuguese");

    int base, exp;

    printf("Digite os valores da base e expoente: ");
    scanf("%d%d",&base,&exp);

    printf("\nPotência: %d",potencia(base,exp));

    return 0;
}


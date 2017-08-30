//8.	Faça uma função que solicita a idade de 10 pessoas e retorne a quantidade de pessoas que possui idade maior ou igual a 18 anos.

#include <stdio.h>
#include <locale.h>

int maiores(){
    int idade, cont=0, i;

    for(i=1; i <= 10; i++){ //10 pessoas
        printf("Digite a idade da %do. pessoa: ",i);
        scanf("%d",&idade);

        if (idade >= 18)
            cont++;
    }
    return cont;
}



int main() {
    setlocale(LC_ALL,"Portuguese");

    printf("A quantidade de pessoas maiores de 18 anos é de %d: ",maiores());

    return 0;
}


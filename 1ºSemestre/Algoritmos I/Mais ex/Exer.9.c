//9.	Faça um programa para uma calculadora simples que solicita ao usuário dois operandos como entrada, seleciona uma das opções da lista (1- soma, 2- produto, 3- divisão, 4- potência) e exibe o resultado. O algoritmo deve executar repetidamente até que os dois operandos informados sejam iguais a zero. Utilize uma variável do tipo real para exibir o resultado.


#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    float operando1, operando2, resultado;
    int operador;

    do{
        printf("Digite um valor para o operando 1: ");
        scanf("%f",&operando1);

        printf("Digite um valor para o operando 2: ");
        scanf("%f",&operando2);

        if (operando1 != 0 || operando2 != 0){
            printf("Escolha a operação:\n1- soma\n2- produto\n3- divisão\n4- potência\n->"); //exibe menu de opções
            scanf("%d",&operador);

            switch(operador){
                case 1:
                    resultado = operando1 + operando2;
                    break;
                case 2:
                    resultado = operando1 * operando2;
                    break;
                case 3:
                    resultado = operando1 / operando2;
                    break;
                case 4:
                    resultado = operando1;  //atribui base para primeiro cálculo
                    if (operando2 == 0)
                        resultado =1;
                    int i;
                    for (i=1; i<operando2; i++){ //utiliza segundo operando para controlar repetições (expoente)
                        resultado = operando1 * resultado;
                    }
                    break;
            }
            printf("\n%.2f\n",resultado);
        }
    }while (operando1 != 0 || operando2 != 0);

    return 0;
}


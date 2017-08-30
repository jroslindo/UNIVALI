//10.	Faça um programa que gere e exiba os 20 primeiros termos da série de Fibonacci (Os dois primeiros termos da série são 1 e 1, os termos subsequentes são a soma dos dois últimos. Observe o exemplo: 1,1,2,3,5,8,13,21,..)

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int t1=1, t2=1;

    int i;
    for(i=1; i <= 10; i++){
        printf("%d %d ",t1,t2);
        t1 = t1 + t2;
        t2 = t1 + t2;
    }
    return 0;
}



//10.	Fa�a um programa que gere e exiba os 20 primeiros termos da s�rie de Fibonacci (Os dois primeiros termos da s�rie s�o 1 e 1, os termos subsequentes s�o a soma dos dois �ltimos. Observe o exemplo: 1,1,2,3,5,8,13,21,..)

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



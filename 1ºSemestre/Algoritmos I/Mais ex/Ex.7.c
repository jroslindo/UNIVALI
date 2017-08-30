//7.	Faça um procedimento que gere e exiba os 20 primeiros termos da série de Fibonacci (Os dois primeiros termos da série são 1 e 1, os termos subsequentes são a soma dos dois últimos. Observe o exemplo: 1,1,2,3,5,8,13,21,..)

#include <stdio.h>

void fibonacci(){
    int t1=0, t2=1, calc=1, i;

    for(i=1; i <= 20; i++){ //+19
        printf("%d ",calc);
        calc = t1 + t2;
        t1 = t2;
        t2 = calc;
    }
}

int main() {
    fibonacci();

    return 0;
}


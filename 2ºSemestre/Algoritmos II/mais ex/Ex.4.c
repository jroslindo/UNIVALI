//4) Faça um programa que receba um valor n, e imprima a contagem regressiva a partir deste valor. Por exemplo, se o usuário digitar 5, o programa irá imprimir 5, 4, 3, 2, 1, 0.

#include <stdio.h>

void contagem (int num) {
    printf("%d\t",num);
    if (num != 0) {
        contagem (num-1);
    }
}

int main() {
    int n = 5;
    contagem(n);
    return 0;
}


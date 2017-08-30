//1) Faça uma função recursiva para elevar um valor base a potência do valor expoente.

#include <stdio.h>

int potenciacao (int base, int expoente) {
    if (expoente < 1)
        return 1;
    return (base * potenciacao(base,expoente-1));
}

int main() {
    int n = 2, m = 3;
    printf("%d",potenciacao(n,m));
    return 0;
}


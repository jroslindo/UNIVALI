//7) Faça uma função recursiva que receba os valores de X e N e realize o cálculo da seguinte progressão geométrica: 1+x+x^2+x^3+x^4+...+x^n

#include <stdio.h>

int potenciacao (int base, int expoente) {
    if (expoente < 1)
        return 1;
    return (base * potenciacao(base,expoente-1));
}

float calculo (int x, int n) {
    if (n < 1) {
        return 1;
    }
    return potenciacao (x,n) + calculo (x, n-1);
}

int main() {
    float x = 3, n = 3;
    printf("%.2f",calculo(x,n));
    return 0;
}


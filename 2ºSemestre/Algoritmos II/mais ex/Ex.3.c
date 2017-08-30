//3) Faça uma função recursiva que calcule o M.D.C. pelo algoritmo de Euclides. Por exemplo, divide-se a por b e obtêm-se o quociente q e o resto r. Se r for zero, b é o m.d.c; se não for, divide-se b por r e assim sucessivamente até encontrar um resto zero. O último divisor é o M.D.C.

#include <stdio.h>

int mdc (int a, int b) {
    if (a % b == 0) {
        return b;
    }
    return mdc (b, a % b);
}

int main() {
    int n = 12, m = 20;
    printf("%d",mdc(n,m));
    return 0;
}


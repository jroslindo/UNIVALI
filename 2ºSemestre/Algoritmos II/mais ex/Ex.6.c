//6) Faça uma função recursiva que realize a multiplicação entre dois valores int, sem utilizar o operador *.

#include <stdio.h>

int multiplica (int a, int b) {
    if (b < 1) {
        return 0;
    }
    return a + multiplica (a, b-1);
}

int main() {
    int n = 5, m = 3;
    printf("%d",multiplica(n,m));
    return 0;
}


//2) Fa�a uma fun��o recursiva que calcule o M.D.C. (m�ximo divisor comum) entre dois valores fornecidos pelo usu�rio. Por exemplo: m.d.c. de 12 e 20 � 4.

#include <stdio.h>

int mdc (int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b) {
        return mdc (a-b, b);
    } else {
        return mdc (a, b-a);
    }
}

int main() {
    int n = 12, m = 20;
    printf("%d",mdc(n,m));
    return 0;
}


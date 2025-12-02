//Tabuada: leia um número inteiro e apresente sua tabuada multiplicativa de 1 a 20.

#include <stdio.h>

int main() {
    int a, i, tabuada;

    printf("Tabuada de: ");
    scanf("%i", &a);

    for (i = 1; i <= 20; i++) {
        tabuada = a * i;
        printf("%i x %i = %i\n", a, i, tabuada);
    }

    return 0;
}
//Maior e posição: leia 10 números inteiros. Identifique o maior valor e apresente sua posição relativa (1 a 10).

#include <stdio.h>

int main() {
    int a, i, maior, maiorind;

    maior = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite um numero %i: ", i);
        scanf("%i", &a);
        if (a > maior){ 
            maior = a;
            maiorind = i;
        }        
    }

    printf("O maior eh = %i e foi o numero %i", maior, maiorind);

    return 0;
}
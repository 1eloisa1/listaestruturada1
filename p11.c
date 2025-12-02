//Soma de ímpares consecutivos I: leia dois números inteiros e calcule a soma dos números ímpares entre eles (não inclusivo).

#include <stdio.h>

int main() {
    int a, b, i, soma, troca; 
    soma = 0;

    printf("Digite a primeiro numero: ");
    scanf("%i", &a); 

    printf("Digite a segundo numero: ");
    scanf("%i", &b);

    if (a > b) {
            troca = a;
            a = b;
            b = troca;
        }

    for (i = a+1; i < b; i++) {
        if (i%2!=0){ 
            soma += i;
        }
    }
    printf("A soma eh %i\n", soma);
    return 0;
}

//Soma de ímpares consecutivos I: leia dois números inteiros e calcule a soma dos números ímpares entre eles (não inclusivo).

#include <stdio.h>

int main() {
    int a, b, i, soma; 

    printf("Digite a primeiro numero: ");
    scanf("%i", &a); 

    printf("Digite a segundo numero: ");
    scanf("%i", &b);

    for (i = a+1; i < b; i++) {
        if (i%2!=0){ 
            soma += i;
        }
    }
    printf("A soma é %i\n", soma);
    return 0;
}

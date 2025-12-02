/*Dividindo X por Y: leia um número inteiro N representando a quantidade de
pares a serem processados. Para cada par X, Y imprima o resultado de X/Y, ou a
mensagem: divisao impossível quando Y for igual a zero.*/

#include <stdio.h>

int main() {
    int N, i, Y, X, divisao; 

    printf("Digite a segundo numero: ");
    scanf("%i", &N);

    for (i = 0; i < N; i++) {
        if (i%2==0){ 
            soma += i;
        }
    }
    printf("A soma é %i\n", soma);
    return 0;
}
/* Dividindo X por Y: leia um número inteiro N representando a quantidade de
pares a serem processados. Para cada par X, Y imprima o resultado de X/Y, ou a
mensagem: divisao impossível quando Y for igual a zero.*/
#include <stdio.h>

int main() {
    float divisao, X, Y;
    int N, i;

    printf("Quantos pares quer ler: ");
    scanf("%i", &N);

     for (i = 0; i < N; i++) {

        printf("Dividendo: ");
        scanf("%f", &X);

        printf("Divisor: ");
        scanf("%f", &Y);

        if (Y!=0){
            divisao = X/Y;
            printf("Divisao =  %.1f / %.1f = %.2f\n", X, Y, divisao);
        }
        else{
            printf("Divisao impossível");
        }
    }
    return 0;
}
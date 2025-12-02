//Sequência de números e soma: leia pares de inteiros M e N. Para cada par positivo, imprima a sequência de números entre eles (inclusive) e a soma total. O processamento termina quando um dos valores for menor ou igual a zero.

#include <stdio.h>

int main() {
    int M, N, i, soma, troca;
     
    printf("Digite a primeiro numero: ");
    scanf("%i", &M); 

    printf("Digite a segundo numero: ");
    scanf("%i", &N);

    while (N > 0 && M > 0){

        soma = 0;

        if (M > N) {
            troca = M;
            M = N;
            N = troca;
        }
        for (i = M; i < N+1; i++) {
            printf("%i\n", i);
            soma += i;
            }

        printf("A soma eh %i\n", soma);

        printf("Digite a primeiro numero: ");
        scanf("%i", &M); 

        printf("Digite a segundo numero: ");
        scanf("%i", &N);

    }


    return 0;
}

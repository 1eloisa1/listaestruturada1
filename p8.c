/*Tempo de jogo com minutos: leia hora e minuto de início e término de um jogo.
Calcule a duração total em horas e minutos. Considere que o jogo pode ultrapassar
a meia-noite.*/
#include <stdio.h>

int main() {
    float inicio, termino, duracao; 

    printf("A hora que iniciou o jogo: ");
    scanf("%f", &inicio); 

    printf("A hora de fim do jogo: ");
    scanf("%f", &termino);

    duracao = termino - inicio;

    if (termino >= 1 && termino < inicio){ }

    }
    printf("Media = %.2f\n", duracao);

    return 0;
}

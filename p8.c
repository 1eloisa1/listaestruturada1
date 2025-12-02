/*. Dividindo X por Y: leia um número inteiro N representando a quantidade de
pares a serem processados. Para cada par X, Y imprima o resultado de X/Y, ou a
mensagem: divisao impossível quando Y for igual a zero.*/
#include <stdio.h>

int main() {
    int hi, mi, hf, mf, ti, tf, duracao, horas_finais, minutos_finais; 

    printf("A hora que iniciou o jogo: ");
    scanf("%i", &hi); 
    printf("O minuto que iniciou o jogo: ");
    scanf("%i", &mi); 

    printf("A hora de fim do jogo: ");
    scanf("%i", &hf);
    printf("O minuto de fim do jogo: ");
    scanf("%i", &mf);

    ti = hi * 60 + mi;
    tf = hf * 60 + mf;

    if(tf < ti){
        tf = tf + 1440; // Soma 24h em minutos
    } else if (ti == tf) {
        tf = tf + 1440; 
    }

    duracao = tf - ti;

    horas_finais = duracao / 60;  
    minutos_finais = duracao % 60; 

    printf("A duracao foi %i hora(s) e %i minuto(s)\n", horas_finais, minutos_finais);

    return 0;
}
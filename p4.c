//Conversão de tempo: leia um valor inteiro N representando o total de segundos. Converta o valor para o formato: horas:minutos:segundos

#include <stdio.h>

int main() {
    int N, horas, minutos, resto, segundos;

    printf("Digite os segundos: ");
    scanf("%i", &N); 

    horas = N / 3600;     
    resto = N % 3600;      
    
    minutos = resto / 60; 
    segundos = resto % 60;

    printf("%i:%i:%i", horas, minutos, segundos);

    return 0;
}
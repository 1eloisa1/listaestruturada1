/*Consumo: leia a distância total percorrida (inteiro) e o combustível gasto
(número real). Calcule o consumo médio de um veículo e imprima o valor no
formato: X.XXX km/l*/

#include <stdio.h>

int main() {
    int distancia;
    float combustivel, consumomedio; 

    printf("A distancia: ");
    scanf("%i", &distancia); 

    printf("O combustivel gasto: ");
    scanf("%f", &combustivel); 

    consumomedio = distancia/combustivel;

    printf("%.3f km/l\n", consumomedio);

    return 0;
}
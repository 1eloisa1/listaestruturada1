/*Esfera: faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159. A saída deverá ter o formato: VOLUME = V .
O valor de V deverá ser apresentado com 3 casas após o ponto. Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3).*/

#include <stdio.h>
#include <math.h>

int main() {
    float volume, raio, pi;

    pi = 3.14159;

    printf("Digite o raio: ");
    scanf("%f", &raio); 

    volume = (4.0/3) * pi * pow(raio, 3);

    printf("VOLUME = %.3f", volume);

    return 0;
}

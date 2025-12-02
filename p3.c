/* Distância: dois carros se deslocam em sentidos opostos com velocidades de
60 km/h e 90 km/h. Dado um valor em quilômetros representando a distância entre
eles, calcule o tempo necessário em minutos para que essa diferença seja
alcançada.*/
#include <stdio.h>

int main() {
    int carro1, carro2, tempo;
    float velociaderelativa, distancia;

    carro1 = 60;
    carro2 = 90;

    velociaderelativa = carro1 + carro2;

    printf("A distancia dos dois carros: ");
    scanf("%f", &distancia); 

    tempo = (distancia/velociaderelativa)*60;

    printf("%i minutos", tempo);

    return 0;
}
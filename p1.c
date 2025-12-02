/* Média 1: leia dois valores decimais A e B. Calcule a média ponderada usando
pesos 3.5 e 7.5 e imprima o resultado com cinco casas decimais no formato: MEDIA
= X*/
#include <stdio.h>

int main() {
    float nota1, nota2, media; 

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); 

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1*3.5  + nota2*7.5) / 11;

    printf("Media = %.5f\n", media);

    return 0;
}

/*Fórmula de Bhaskara: leia três valores reais A, B e C. Calcule as raízes reais de
uma equação do segundo grau usando a fórmula de Bhaskara. Se A = 0 ou o discriminante (delta) < 0, imprima: Impossível calcular*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o nemero 1: ");
    scanf("%f", &a); 

    printf("Digite o nemero 2: ");
    scanf("%f", &b); 

    printf("Digite o nemero 3: ");
    scanf("%f", &c); 

    delta = (b*b) - (4*a*c);

    if (a == 0 || delta < 0){ 
        printf("Impossível calcular");
    }

    else{ 
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("A' = %.1f\nA'' = %.1f", raiz1, raiz2);
    }

    return 0;
}

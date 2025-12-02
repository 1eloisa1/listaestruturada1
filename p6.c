/*Coordenadas de um ponto: leia dois valores reais x e y e determine a localização
do ponto no plano cartesiano: quadrante, eixo ou origem.*/

#include <stdio.h>

int main() {
    float x, y;

    printf("Digite o x: ");
    scanf("%f", &x); 

    printf("Digite o y: ");
    scanf("%f", &y); 

    if(x != 0 && y == 0){
        printf("O ponto está no eixo X\n");
    }
    else if(x == 0 && y != 0){
        printf("O ponto está no eixo Y\n");
    }
    else if(x > 0 && y > 0){
        printf("O ponto está no primeiro quadrante\n");
    }
    else if(x < 0 && y > 0){
        printf("O ponto está no segundo quadrante\n");
    }
    else if(x < 0 && y < 0){
        printf("O ponto está no terceiro quadrante\n");
    }
    else if(x > 0 && y < 0){
        printf("O ponto está no quarto quadrante\n");
    }
    else{
        printf("O ponto está na origem\n");
    } 
    return 0;
}

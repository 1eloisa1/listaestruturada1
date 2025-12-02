/*Aumento de salário: leia o valor de um salário e aplique o reajuste porcentual
com base na faixa salarial. Imprima o novo salário, o valor do reajuste e o percentual utilizado.*/

#include <stdio.h>

int main() {
    float salario, novosalario, reajuste; 

    printf("Digite o salario: ");
    scanf("%f", &salario); 

    if (salario < 1500){ 
        novosalario = salario + 0.2*salario;
        reajuste = novosalario-salario;
        printf("Novo salario = %.2f\nReajuste =  %.2f\nPercentual = 20", novosalario, reajuste);
    }

    else if (salario >= 1500 && salario < 5000){ 
        novosalario = salario + 0.15*salario;
        reajuste = novosalario-salario;
        printf("Novo salario = %.2f\n Reajuste =  %.2f\n Percentual = 15", novosalario, reajuste);
    }
    
    else{ 
        novosalario = salario + 0.1*salario;
        reajuste = novosalario-salario;
        printf("Novo salario = %.2f\n Reajuste =  %.2f\n Percentual = 10", novosalario, reajuste);
    }

    return 0;
}

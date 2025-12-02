/*Sort simples: leia três valores inteiros e apresente-os em ordem crescente. Em
seguida, apresente os mesmos valores na ordem original, separados por uma linha
em branco.*/
#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Digite o numero 1: ");
    scanf("%i", &n1);

    printf("Digite o numero 2: ");
    scanf("%i", &n2);

    printf("Digite o numero 3: ");
    scanf("%i", &n3);

    if (n1 <= n2 && n1 <= n3) {
        // n1 é o menor. entre n2 e n3
        if (n2 <= n3) {
            printf("%i\n%i\n%i\n", n1, n2, n3);
        } else {
            printf("%i\n%i\n%i\n", n1, n3, n2);
        }
    }
    else if (n2 <= n1 && n2 <= n3) {
        // n2 é o menor. Decidir entre n1 e n3
        if (n1 <= n3) {
            printf("%i\n%i\n%i\n", n2, n1, n3);
        } else {
            printf("%i\n%i\n%i\n", n2, n3, n1);
        }
    }
    else {
       // n3 é o menor. Decidir entre n1 e n2
        if (n1 <= n2) {
            printf("%i\n%i\n%i\n", n3, n1, n2);
        } else {
            printf("%i\n%i\n%i\n", n3, n2, n1);
        }
    }

    printf("\n");
    printf("%i\n%i\n%i\n", n1, n2, n3); //original

    return 0;
}
#include <stdio.h>

int main(void) {
    int numeros[5];
    
    for (int i = 0; i < 5; i++) {
        do {
            printf("Insira um número entre 1 e 30: ");
            scanf("%d", &numeros[i]);
        } while (numeros[i] < 1 || numeros[i] > 30);
    }

    printf("\nGrafico:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d: ", numeros[i]);
        for (int j = 0; j < numeros[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
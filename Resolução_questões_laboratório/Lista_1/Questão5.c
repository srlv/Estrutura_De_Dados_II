#include <stdio.h>
#include <math.h>

int main(void) {
    int numero, i;
    int soma = 0, quadrados = 0, cubos = 0;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
    
        for (i = 1; i <= numero; i++) {
            soma += i;
            quadrados += pow(i, 2);  
            cubos += pow(i, 3);     
        }

        printf("Soma dos números de 1 até %d: %d\n", numero, soma);
        printf("Soma dos quadrados de 1 até %d: %d\n", numero, quadrados);
        printf("Soma dos cubos de 1 até %d: %d\n", numero, cubos);
    }

    return 0;
}





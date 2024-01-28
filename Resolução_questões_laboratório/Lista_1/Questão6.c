#include <stdio.h>

int calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        int fatorial = 1;
        for (int i = 2; i <= num; i++) {
            fatorial = fatorial * i;
        }
        return fatorial;
    }
}

int main(void) {
    int n;
    printf("Insira um número inteiro positivo \t: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
        printf("n\tFatorial\n");
        printf("--------------------\n");
        for (int i = 1; i <= n; i++) {
            printf("%d\t%d\n", i, calcularFatorial(i));
        }
    }

    return 0;
}
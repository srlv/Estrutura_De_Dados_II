#include <stdio.h>
int isPerfect(int num) {
    int soma = 1; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            soma += i;
            if (i * i != num) {
                soma += num / i;
            }
        }
    }
return soma == num;
}

int main(void) {
    printf("Números perfeitos entre 1 e 1000:\n");

    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d é um número perfeito. Fatores: 1", i);
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
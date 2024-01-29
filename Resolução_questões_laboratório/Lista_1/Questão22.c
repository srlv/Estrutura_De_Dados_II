#include <stdio.h>
int produto(int x1, int x2) {
    if (x2 == 0) {
        return 0; 
    } else {
        return x1 + produto(x1, x2 - 1);
    }
}
int main(void) {
    int x1, x2;
    printf("Digite dois números inteiros x1 e x2: ");
    scanf("%d %d", &x1, &x2);
    int resultado = produto(x1, x2);
    printf("O produto de %d e %d é: %d\n", x1, x2, resultado);
    return 0;
}
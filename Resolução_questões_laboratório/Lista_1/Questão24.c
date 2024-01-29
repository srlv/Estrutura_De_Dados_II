#include <stdio.h>
int somatorio(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somatorio(n - 1);
    }
}
int main(void) {
    int n;
    printf("Digite um número inteiro N: ");
    scanf("%d", &n);
    printf("O somatório de 1 até %d é: %d\n", n, somatorio(n));
    return 0;
}
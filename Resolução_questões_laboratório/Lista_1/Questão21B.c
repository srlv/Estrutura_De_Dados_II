#include <stdio.h>
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}
int main(void) {
    int num;
    printf("Digite um número natural: ");
    scanf("%d", &num);
    printf("O fatorial de %d é: %d\n", num, fatorial(num));
    return 0;
}
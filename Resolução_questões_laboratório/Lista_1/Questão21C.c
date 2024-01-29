#include <stdio.h>
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(void) {
    int termo;
    printf("Digite o termo desejado da série de Fibonacci: ");
    scanf("%d", &termo);
    printf("O termo %d da série de Fibonacci é: %d\n", termo, fibonacci(termo));
    return 0;
}
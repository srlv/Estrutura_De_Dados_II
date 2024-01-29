#include <stdio.h>
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main(void) {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);
    printf("O MDC entre %d e %d é: %d\n", num1, num2, mdc(num1, num2));
    return 0;
}
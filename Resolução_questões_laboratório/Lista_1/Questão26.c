#include <stdio.h>
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}
int main(void) {
    int m, n;
    printf("Digite dois números inteiros m e n: ");
    scanf("%d %d", &m, &n);
    int resultado = ackermann(m, n);
    printf("O resultado de A(%d, %d) é: %d\n", m, n, resultado);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main(void) {
    int a, b, c;
    printf("Digite os coeficientes a, b e c (inteiros): ");
    scanf("%d %d %d", &a, &b, &c);
    int discriminante = b * b - 4 * a * c;
    if (discriminante >= 0) {
        printf("A função quadrática tem raízes reais.\n");
    } else {
        printf("A função quadrática não tem raízes reais.\n");
    }
    return 0;
}
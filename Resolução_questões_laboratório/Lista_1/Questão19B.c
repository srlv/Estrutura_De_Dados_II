#include <stdio.h>
#include <math.h>
int main(void) {
    int a, b, c;
    printf("Digite os coeficientes a, b e c (inteiros): ");
    scanf("%d %d %d", &a, &b, &c);
    int discriminante = b * b - 4 * a * c;
    if (discriminante >= 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2.0 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2.0 * a);
        printf("As raízes reais são: %.2f e %.2f\n", raiz1, raiz2);
    } else {
        printf("A função quadrática não tem raízes reais.\n");
    }
    return 0;
}
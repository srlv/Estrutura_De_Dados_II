#include <stdio.h>
#include <math.h>
float hipotenusa(float a, float b) {
    return sqrtf(pow(a, 2) + pow(b, 2));
}
int main(void) {
    float cateto1, cateto2;
    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Digite o comprimento do segundo cateto: ");
    scanf("%f", &cateto2);
    float resultado = hipotenusa(cateto1, cateto2);
    printf("O comprimento da hipotenusa é: %.2f\n", resultado);
    return 0;
}
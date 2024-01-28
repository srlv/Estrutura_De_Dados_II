#include <stdio.h>
void exibirRetangulo(int lado1, int lado2) {
    for (int i = 0; i < lado1; i++) {
        for (int j = 0; j < lado2; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    int lado1, lado2;
    printf("Digite o valor do lado1: ");
    scanf("%d", &lado1);
    printf("Digite o valor do lado2: ");
    scanf("%d", &lado2);
    exibirRetangulo(lado1, lado2);
    return 0;
}
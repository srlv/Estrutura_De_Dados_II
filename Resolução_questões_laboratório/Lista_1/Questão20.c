#include <stdio.h>
int somaDigitos(int numero) {
    int soma = 0;
    numero = numero >= 0 ? numero : -numero;
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    return soma;
}
int main(void) {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("A soma dos dígitos é: %d\n", somaDigitos(numero));

    return 0;
}
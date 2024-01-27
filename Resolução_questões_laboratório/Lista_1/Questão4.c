#include <stdio.h>

int Primo(int numero, int divisor) {
    if (numero <= 1) {
        return 0; 
    }
    if (divisor == 1) {
        return 1; 
    }
    if (numero % divisor == 0) {
        return 0; 
    }
    return Primo(numero, divisor - 1);
}
void imprimirprimo(int numero) {
    if (numero <= 1) {
        return; 
    }
    imprimirprimo(numero - 1);

    if (Primo(numero, numero - 1)) {
        printf("%d ", numero);
    }
}
int main(void) {
    printf("Números primos de 1 a 100:\n");
    imprimirprimo(100);
    printf("\n");
    return 0;
}
#include <stdio.h>

int somamultiplos(int num) {
    if (num == 0) {
        return 0;
    } else if (num % 7 == 0) {
        return num + somamultiplos(num - 1);
    } else {
        return somamultiplos(num - 1);
    }
}

int main() {
    int resultado = somamultiplos(100);
    printf("A soma dos múltiplos de 7 de 1 a 100 e: %d\n", resultado);
    return 0;
}
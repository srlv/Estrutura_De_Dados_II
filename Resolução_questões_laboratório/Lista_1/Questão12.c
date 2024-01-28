#include <stdio.h>
void imprimeRomano(int numero) {
    int valoresDecimais[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *algarismosRomanos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 9; i++) {
        while (numero >= valoresDecimais[i]) {
            printf("%s", algarismosRomanos[i]);
            numero -= valoresDecimais[i];
        }
    }
}

int main(void) {
    for (int i = 1; i <= 100; i++) {
        printf("%d\t\t", i);
        imprimeRomano(i);
        printf("\n");
    }

    return 0;
}
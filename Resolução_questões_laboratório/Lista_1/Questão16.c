#include <stdio.h>

void imprimircaracter(char caractere) {
    printf("%c", caractere);
}

int main(void) {
    char caractere;

    printf("Informe o caractere: ");
    scanf(" %c", &caractere); 

    imprimircaracter(caractere);

    return 0;
}
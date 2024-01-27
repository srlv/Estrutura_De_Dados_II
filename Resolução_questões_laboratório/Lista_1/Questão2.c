/*Escreva um programa que converta temperaturas de 30 oC a
50 oC para a escala Fahrenheit espaçados de 1 oC. O programa deve imprimir
uma tabela exibindo as temperaturas nas duas escalas lado a lado. [Dica:
F = C + 32]*/

#include <stdio.h>

void imprimirTabela(int celsius) {
    if (celsius > 50) {
       
     return;
    }
    float fahrenheit = celsius + 32;
    printf("%d\t%.f\n", celsius, fahrenheit);
    imprimirTabela(celsius + 1);
}

int main(void) {
    printf("Celsius\tFahrenheit\n");
    imprimirTabela(30);
    return 0;
}
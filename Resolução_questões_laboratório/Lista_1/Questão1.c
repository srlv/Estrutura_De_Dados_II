/*Escreva um programa para somar uma sequência de inteiros e
calcular sua média. Suponha que o primeiro inteiro lido com scanf especifique
o número de valores a serem inseridos. Seu programa deve ler apenas um
valor cada vez que scanf é executado. Uma sequência de entrada típica pode
ser:*/

#include<stdio.h>

int somamedia(int quant) {
    int num;
    if (quant == 0) {
        return 0;
    } else {
        printf("Informe um numero: ");
        scanf("%d", &num);
        return num + somamedia(quant - 1);
    }
}

int main(void) {
    int numeros;
    float media;
     
    printf("Informe quantos números você deseja somar e calcular a média:\t");
    scanf("%d", &numeros);

    int resultado = somamedia(numeros);
    media = resultado / numeros;

    printf("Sua soma vai ser %d\n", resultado);
    printf("Sua média vai ser %.2f\n", media);

    return 0;
}
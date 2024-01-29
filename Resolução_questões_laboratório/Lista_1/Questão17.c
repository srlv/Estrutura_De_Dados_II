#include <stdio.h>
#include <stdlib.h>

int segundos_desde_12h(int horas, int minutos, int segundos) {
    int horas_12h = horas % 12;
    int total_segundos = horas_12h * 3600 + minutos * 60 + segundos;
    return total_segundos;
}

int diferenca_entre_tempos(int horas1, int minutos1, int segundos1, int horas2, int minutos2, int segundos2) {
    int segundos_tempo1 = segundos_desde_12h(horas1, minutos1, segundos1);
    int segundos_tempo2 = segundos_desde_12h(horas2, minutos2, segundos2);
    int diferenca_segundos = abs(segundos_tempo2 - segundos_tempo1);
    return diferenca_segundos;
}

int main(void) {
    int horas1 = 10, minutos1 = 30, segundos1 = 45;
    int horas2 = 2, minutos2 = 15, segundos2 = 20;
    int diferenca = diferenca_entre_tempos(horas1, minutos1, segundos1, horas2, minutos2, segundos2);
    printf("A diferença entre os tempos é de %d segundos.\n", diferenca);
    return 0;
}
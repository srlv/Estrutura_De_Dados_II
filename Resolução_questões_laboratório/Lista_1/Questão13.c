#include <stdio.h>

int main() {
    int DiaS;
    int DiaM;
    int Mes;
    int Ano;
    int Seculo;

    printf("Dia do mes: ");
    scanf("%d", &DiaM);

    printf("Mes: ");
    scanf("%d", &Mes);

    printf("Ano: ");
    scanf("%d", &Ano);

    printf("Seculo: ");
    scanf("%d", &Seculo);

    if (Mes <= 2) {
        Mes += 12;
        Ano--;
    }

    DiaS = (DiaM + ((13 * (Mes + 1)) / 5) + Ano + (Ano / 4) + (Seculo / 4) - 2 * Seculo) % 7;

    if (DiaS < 0) {
        DiaS += 7;
    }

    switch(DiaS) {
        case 0: 
            printf("Domingo\t%d\t%d\n", DiaM, Ano);
            break;
        case 1:
            printf("Segunda\t%d\t%d\n", DiaM, Ano);
            break;
        case 2:
            printf("Terca\t%d\t%d\n", DiaM, Ano);
            break;
        case 3:
            printf("Quarta\t%d\t%d\n", DiaM, Ano);
            break;
        case 4:
            printf("Quinta\t%d\t%d\n", DiaM, Ano);
            break;
        case 5:
            printf("Sexta\t%d\t%d\n", DiaM, Ano);
            break;
        case 6:
            printf("Sabado\t%d\t%d\n", DiaM, Ano);
            break;
        default:
            printf("Erro!");
    }

    return 0;
}
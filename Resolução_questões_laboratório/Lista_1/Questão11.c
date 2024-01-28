#include <stdio.h>
#include <math.h>

void TriplosPitagoricos(int n) {
    printf("Triplos Pitagóricos para n = %d:\n", n);
    printf("Cateto 1\tCateto 2\tHipotenusa\n");
    printf("--------------------------------\n");

    for (int cateto1 = 1; cateto1 <= n; cateto1++) {
        for (int cateto2 = cateto1; cateto2 <= n; cateto2++) {
            int hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
            
            if (hipotenusa <= n && hipotenusa * hipotenusa == cateto1 * cateto1 + cateto2 * cateto2) {
                printf("%d\t\t%d\t\t%d\n", cateto1, cateto2, hipotenusa);
            }
        }
    }
}
int main(void) {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    TriplosPitagoricos(n);

    return 0;
}
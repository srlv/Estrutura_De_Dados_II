#include <stdio.h>

int main(void) {
    int linha = 0;

    for (int i = 0; i <= 127; i++) {
        printf("%d   ", i);
        if (++linha == 10) {
            printf("\n"); 
            linha = 0;      
        }
    }
    return 0;
}
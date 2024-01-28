#include <stdio.h>

#define NUM_PRODUTOS 5

int main(void) {
    int codigoProduto[NUM_PRODUTOS] = {1, 2, 3, 4, 5};
    float precoProduto[NUM_PRODUTOS] = {3.00, 4.00, 2.80, 1.95, 5.00};
    float totalVendasProduto[NUM_PRODUTOS] = {0};

    int codigo, quantidadeVendida;
    float totalGeral = 0;

    do {
        printf("======================================\n");
        printf("Código do produto    Preço do Produto \n");

        for(int i = 0; i < NUM_PRODUTOS; i++) {
            printf("         %d                    %.2f            \n", codigoProduto[i], precoProduto[i]);
        }
        printf("======================================\n");

        printf("Digite o código ou 0 para sair: ");
        scanf("%d", &codigo);

        if (codigo >= 1 && codigo <= NUM_PRODUTOS) {
            printf("Quantidade vendida: ");
            scanf("%d", &quantidadeVendida);

            totalVendasProduto[codigo - 1] += precoProduto[codigo - 1] * quantidadeVendida;

            totalGeral += totalVendasProduto[codigo - 1];
        } else if (codigo != 0) {
            printf("Código errado!\n");
        }
    } while(codigo != 0);

    printf("Total de tudo é: %.2f reais\n", totalGeral);

    return 0;
}
#include <stdio.h>

int main() {
    int opcao, quantidade, continuar = 1;
    float valor_total = 0;

    while (continuar) {
        printf("Menu de frutas:\n");
        printf("1 - Abacaxi (R$5,00/unidade)\n");
        printf("2 - Maça (R$1,00/unidade)\n");
        printf("3 - Pera (R$4,00/unidade)\n");
        printf("Digite o número da fruta desejada ou um número negativo para finalizar a compra:\n");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("Digite a quantidade desejada:\n");
            scanf("%d", &quantidade);

            if (opcao == 1) {
                valor_total += quantidade * 5;
                printf("%d abacaxis adicionados ao carrinho.\n", quantidade);
            } else if (opcao == 2) {
                valor_total += quantidade;
                printf("%d maças adicionadas ao carrinho.\n", quantidade);
            } else {
                valor_total += quantidade * 4;
                printf("%d peras adicionadas ao carrinho.\n", quantidade);
            }
        } else {
            continuar = 0;
        }
    }

    printf("Valor total da compra: R$%.2f\n", valor_total);

    return 0;
}
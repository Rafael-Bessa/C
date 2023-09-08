#include <stdio.h>

int main() {
    int total_inteira = 0;
    int total_meia = 0;
    double arrecadacao = 0;
    int num_compras;
    int metodo_pagamento;

    printf("-------------------------------------------\n");
    printf("|    Bem-vindo ao Museu Multitematico!    |\n");
    printf("-------------------------------------------\n");

    while (1) {
        printf("\nEscolha o tipo de bilhete:\n\n");
        printf("1 - Inteira (R$40.00)\n");
        printf("2 - Meia (R$20.00)\n");
        printf("0 - Encerrar venda de bilhetes\n");

        int escolha;
        scanf("%d", &escolha);

        if (escolha == 0) {
            break; 
        } else if (escolha == 1 || escolha == 2) {
            printf("Quantos bilhetes deseja comprar: ");
            scanf("%d", &num_compras);
            
            if (num_compras <= 0) {
                printf("Numero invalido de bilhetes. Por favor, escolha novamente.\n");
                continue; 
            }

            if (escolha == 1) {
                total_inteira += num_compras;
                arrecadacao += num_compras * 40.0;
            } else if (escolha == 2) {
                total_meia += num_compras;
                arrecadacao += num_compras * 20.0;
            }
        } else {
            printf("Opcao invalida. Por favor, escolha novamente.\n");
        }
    }

    printf("\n***** Relatorio de vendas *****\n\n");
    printf("Total de bilhetes inteiros vendidos: %d\n", total_inteira);
    printf("Total de bilhetes meia vendidos: %d\n", total_meia);
    printf("A receber: R$%.2lf\n", arrecadacao);
    
    printf("\nSelecione o metodo de pagamento:\n");
    printf("1 - PIX\n");
    printf("2 - Credito\n");
    printf("3 - Debito\n");
    printf("4 - Dinheiro\n");
     
    scanf("%d", &metodo_pagamento);

	switch (metodo_pagamento) {
        case 1:
            printf("Pagamento via PIX solicitado!\n");
            break;
        case 2:
            printf("Pagamento com cartao de credito solicitado!\n");
            break;
        case 3:
            printf("Pagamento com cartao de debito solicitado!\n");
            break;
        case 4:
            printf("Pagamento em dinheiro solicitado!\n");
            break;
        default:
            printf("Opcao de pagamento invalida.\n");
            break;
    }

    return 0;
}



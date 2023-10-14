#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Continua lendo e descartando caracteres do buffer até encontrar '\n' ou o final do arquivo (EOF).
    }
}

int main() {
    FILE *arquivo;
    arquivo = fopen("respostas.csv", "a"); // Abre o arquivo respostas.csv para adicionar respostas

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char resposta[100]; // Tamanho máximo da resposta
    int opcao;

    printf("Por favor, responda as seguintes perguntas:\n");

    printf("1. Qual foi o seu nivel de satisfacao com essa exposicao?\n");
    printf("   1 - Muito satisfeito\n   2 - Satisfeito\n   3 - Neutro\n   4 - Insatisfeito\n   5 - Muito insatisfeito\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    limparBuffer();
    if (opcao >= 1 && opcao <= 5) {
        sprintf(resposta, "%d", opcao);
        fprintf(arquivo, "Satisfacao ,%s\n", resposta);
    } else {
        printf("Opcao invalida. Resposta nao registrada.\n");
    }

    // Pergunta 2
    printf("2. Apresentacao Visual (Design e Organizacao)?\n");
    printf("   1 - Excelente\n   2 - Bom\n   3 - Regular\n   4 - Ruim\n   5 - Pessimo\n" );
    printf("Opcao: ");
    scanf("%d", &opcao);
    limparBuffer();
    if (opcao >= 1 && opcao <= 5) {
        sprintf(resposta, "%d", opcao);
        fprintf(arquivo, "Apresentacao Visual ,%s\n", resposta);
    } else {
        printf("Opcao invalida. Resposta nao registrada.\n");
    }

    // Pergunta 3
    printf("3. Informacoes e Explicacoes sobre a exposicao?\n");
    printf("   1 - Muito Claras e Informativas\n   2 - Claras\n   3 - Neutras\n   4 - Pouco Claras\n   5 - Inexistentes\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    limparBuffer();
    if (opcao >= 1 && opcao <= 6) {
        sprintf(resposta, "%d", opcao);
        fprintf(arquivo, "Informacoes e Explicacoes sobre a exposicao ,%s\n", resposta);
    } else {
        printf("Opcao invalida. Resposta nao registrada.\n");
    }
    
    // Pergunta 4
    printf("4. Ambiente e Atmosfera Geral dessa exposicao?\n");
    printf("   1 - Muito Agradavel\n   2 - Agradavel\n   3 - Neutro\n   4 - Desagradavel\n   5 - Muito Desagradavel\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    limparBuffer();
    if (opcao >= 1 && opcao <= 6) {
        sprintf(resposta, "%d", opcao);
        fprintf(arquivo, "Ambiente e Atmosfera Geral dessa exposicao ,%s\n", resposta);
    } else {
        printf("Opcao invalida. Resposta nao registrada.\n");
    }

	// Pergunta 5
    printf("5. Conteudo da exposicao?\n");
    printf("   1 - Muito Interessante\n   2 - Interessante\n   3 - Neutro\n   4 - Pouco Interessante\n   5 - Nao Interessante\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    limparBuffer();
    if (opcao >= 1 && opcao <= 6) {
        sprintf(resposta, "%d", opcao);
        fprintf(arquivo, "Conteudo da exposicao ,%s\n", resposta);
    } else {
        printf("Opcao invalida. Resposta nao registrada.\n");
    }
   
    fclose(arquivo);
    printf("Obrigado por responder as perguntas de satisfacao e volte sempre!\n");

    return 0;
}



#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TENTATIVAS 6
#define TAMANHO_PALAVRA 20

int main() {
    char palavra[TAMANHO_PALAVRA];
    char palavraAdivinhada[TAMANHO_PALAVRA];
    int tentativas = 0;
    int acertos = 0;
    int i;

    printf("Bem-vindo ao jogo da forca!\n");
    printf("Digite a palavra secreta: ");

    // L� a palavra secreta do jogador
    scanf("%s", palavra);
    int tamanhoPalavra = strlen(palavra);

    // Inicializa a palavra adivinhada com tra�os
    for (i = 0; i < tamanhoPalavra; i++) {
        palavraAdivinhada[i] = '_';
    }
    palavraAdivinhada[tamanhoPalavra] = '\0';

    while (tentativas < MAX_TENTATIVAS && acertos < tamanhoPalavra) {
        char letra;
        printf("\nPalavra adivinhada: %s\n", palavraAdivinhada);
        printf("Tentativas restantes: %d\n", MAX_TENTATIVAS - tentativas);
        printf("Digite uma letra: ");

        // L� a letra do jogador
        scanf(" %c", &letra);

        // Verifica se a letra j� foi tentada
        int letraRepetida = 0;
        for (i = 0; i < tamanhoPalavra; i++) {
            if (palavraAdivinhada[i] == letra) {
                letraRepetida = 1;
                break;
            }
        }

        if (letraRepetida) {
            printf("Voc� j� tentou esta letra. Tente novamente.\n");
        } else {
            int letraEncontrada = 0;
            for (i = 0; i < tamanhoPalavra; i++) {
                if (palavra[i] == letra) {
                    palavraAdivinhada[i] = letra;
                    acertos++;
                    letraEncontrada = 1;
                }
            }

            if (letraEncontrada) {
                printf("Letra correta!\n");
            } else {
                printf("Letra incorreta. Tente novamente.\n");
                tentativas++;
            }
        }
    }

    if (acertos == tamanhoPalavra) {
        printf("Parab�ns! Voc� venceu. A palavra era: %s\n", palavra);
    } else {
        printf("Voc� perdeu. A palavra correta era: %s\n", palavra);
    }

    return 0;
}


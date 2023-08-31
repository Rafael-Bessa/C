#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite, tentativas = 0;
    int limite_inferior = 1, limite_superior = 100;

    // Inicializar o gerador de números aleatórios
    srand(time(0));
    
    // Gerar um número aleatório entre limite_inferior e limite_superior
    numero_secreto = rand() % 100 + 1;

    printf("Bem-vindo ao Jogo de Adivinhacao!\n");
    printf("Tente adivinhar o numero entre %d e %d.\n", limite_inferior, limite_superior);

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        
        tentativas++;

        if (palpite < numero_secreto) {
            printf("Dica: O numero e maior.\n");
        } else if (palpite > numero_secreto) {
            printf("Dica: O numero e menor.\n");
        } else {
            printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
            break;
        }
    } while (1);

    return 0;
}


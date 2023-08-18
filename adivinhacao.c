#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("**********************************\n\n");
    printf("BEM VINDO AO JOGO DE ADIVINHACAO\n\n");
    printf("**********************************\n\n");

    int numeroSecreto = rand() % 100 + 1; /*Gerar um número aleatorio de 1 a 100*/
    printf("%d", numeroSecreto);


    return 0;
}

/*
Implemente a fun��o soma_lista(lista), 
que recebe como par�metro uma lista de n�meros inteiros
 e devolve um n�mero inteiro correspondente � soma dos elementos desta lista.

Sua solu��o deve ser implementada utilizando recurs�o.
*/

#include <stdio.h>

int soma_lista(int lista[], int tamanho) {
    // Caso base: Se a lista estiver vazia (tamanho = 0), a soma � 0.
    if (tamanho == 0) {
        return 0;
    } else {
        // Caso recursivo: A soma � o primeiro elemento da lista
        // mais a soma dos elementos restantes da lista.
        return lista[0] + soma_lista(lista + 1, tamanho - 1);
    }
}

int main() {
    int minha_lista[] = {10, -7, 33, 2, 35};
    int tamanho = sizeof(minha_lista) / sizeof(minha_lista[0]);
    
    int resultado = soma_lista(minha_lista, tamanho);
    printf("A soma dos elementos da lista e: %d\n", resultado); 

    return 0;
}


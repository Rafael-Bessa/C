//Crie um programa que recebe um vetor de inteiros e um n�mero para buscar. O
//programa deve verificar se o n�mero est� presente no vetor e, se estiver, indicar
//a posi��o onde foi encontrado. Caso contr�rio, deve informar que o n�mero n�o
//est� no vetor.

#include <stdio.h>

int main(){
	int vetor[10];
	int numero;
	int i;
	int valorDigitado;
	int temNumero = 0;
		
	printf("Digite 10 numeros para preencher o vetor: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &valorDigitado);
		vetor[i] = valorDigitado;
	}
	
	printf("Qual numero voce quer buscar: \n");
	scanf("%d", &numero);
	
	for(i = 0; i < 10; i++){
		if(vetor[i] == numero){
			printf("Encontrei o numero buscado na posicao %d \n", i);
			temNumero = 1;
		}	
	}
	
	if(!temNumero){
		printf("O numero buscado nao esta no vetor! \n");
	}
}

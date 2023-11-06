#include <stdio.h>

//Escreva um programa em C que recebe dois vetores de inteiros com o mesmo
//tamanho e calcula a soma dos elementos correspondentes, armazenando o
//resultado em um terceiro vetor.

int main () {
	int vetor1[3];
	int vetor2[3];
	int vetor3[3];
	int i;
	int valorDigitado;
	
	printf("Digite 3 numeros para o primeiro vetor: \n");
	for(i = 0; i < 3; i++){
		scanf("%d", &valorDigitado);
		vetor1[i] = valorDigitado;
	}
	
	printf("Digite 3 numeros para o segundo vetor: \n");
	for(i = 0; i < 3; i++){
		scanf("%d", &valorDigitado);
		vetor2[i] = valorDigitado;
	}
	
	for(i = 0; i < 3; i++){
		vetor3[i] = vetor1[i] + vetor2[i];
	}
	
	printf("O vetor resultado sera: \n");
	printf("%d %d %d", vetor3[0], vetor3[1], vetor3[2]);
	
}

#include <stdio.h>

int main(){
	
//Crie um programa que preencha todos os valores de uma matriz 2x2, e em seguida exiba todos 
//os valores e a soma de todos os valores

	int matriz[2][2];
	int i,j;
	int soma = 0;
	
// 00 01
// 10 11

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Digite o elemento %d %d : ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}	
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			soma += matriz[i][j];
		}
	}
	
	printf("\nA soma dos elementos da matriz : %d ", soma);	
	
}

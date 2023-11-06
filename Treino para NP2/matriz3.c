#include <stdio.h>

int main(){
	
//Crie um programa que recebe uma matriz de inteiros positivos e substitui seus elementos de 
//valor ímpar por -1 e os pares por +1.
	
	int i,j;
	int matriz[2][2] = {{4, 7}, {1, 2}};
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			if(matriz[i][j] % 2 == 0){
				matriz[i][j] = 1;
			}
			else{
				matriz[i][j] = -1;
			}
		}
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("O elemente [%d][%d] : %d\n", i,j,matriz[i][j]);
		}
	}
	
	
}

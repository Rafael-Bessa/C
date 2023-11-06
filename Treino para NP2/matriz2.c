#include <stdio.h>

//Crie um programa que receba valores do usuário para preencher uma matriz, e em seguida, exiba 
//a soma dos valores dela e a soma dos valores da primeira diagonal,ou seja, diagonal principal.


int main(){
	
//	00 01 02
//	10 11 12
//	20 21 22

//Diagonal principal -> 00 11 22
	
	int i,j,k;
	float soma = 0.0;
	float somaDiagonal = 0.0;
	
	float matriz[3][3] = {{1.5, 2.0, 3.5}, {0.5, 3.1, 8.2}, {7.3, 3.4, 0.1}};
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			soma += matriz[i][j];	
		}
	}
	
	for(i = 0; i < 3; i++){
		somaDiagonal += matriz[i][i];
	}
	
	printf("%.2f \n", soma);
	printf("%.2f", somaDiagonal);
	
}

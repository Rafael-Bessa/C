#include <stdio.h>

int main(){
	
	int numeros[10];
	int i;
	float media = 0;
	float soma = 0;
	
	printf("Digite 10 numeros, o programa ira fazer a media aritmetica deles!\n");
	
	for(i = 0; i < 10; i++){
		printf("Digite o %d: ", i + 1);
		scanf("%d", &numeros[i]);
		soma += numeros[i];
	}
	
	printf("**************\n");
	media = soma/10;
	printf("A media e: %.2f", media);
}


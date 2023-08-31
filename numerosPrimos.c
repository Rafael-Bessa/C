#include <stdio.h>

int main(){

	printf("Verificar se um numero e PRIMO\n");
	printf("******************************************************\n");
	
	int numero;
	int divisores = 0;
	int i;   //variavel de controle do looping
	
	printf("Digite o numero : \n");
	scanf("%d", &numero);
	
	for(i = 1; i <= numero; i++){	
		
		if(numero % i == 0){
			printf("Dividiu por %d\n", i);
			divisores++;
		}
	}
	
	if(divisores == 2){
		printf("Este numero eh PRIMO");
	}
	else{
		printf("Este numero NAO eh PRIMO");
	}
		
	return 0;
}

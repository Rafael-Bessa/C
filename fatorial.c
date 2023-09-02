#include <stdio.h>

int main(){
	
	printf("Fatorial de um numero\n");
	printf("**********************\n");
	
	int numero;
	long resultado = 1;
	int i;
	
	printf("Fatorial de qual numero voce quer? \n");
	scanf("%d", &numero);
	
	for(i = 1; i <= numero; i++){
		resultado *= i;
	}
	
	printf("%ld", resultado);		
}

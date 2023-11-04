#include <stdio.h>

int main(){
	
	int i, numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for(i = 1; i <= numero; i++){
		printf("%d\n", i);
	}
}

#include <stdio.h>

int main(){
	
	int i, numero;
	int soma = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for(i = 2; i <= numero; i+=2){
		soma += i;
	}
	
	printf("%d", soma);
}

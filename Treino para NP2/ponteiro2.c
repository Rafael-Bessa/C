#include <stdio.h>

int main(){
	
	int *ptr;
	int valor = 10;
	
	ptr = &valor;
	
	printf("Endereco = %x, &valor");
	printf("Endereco = %x, ptr");
	printf("Valor = %d", *ptr);
}

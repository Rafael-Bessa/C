#include <stdio.h>

//IMPORTANTE INICIAR A SOMA COM ZERO!

int main(){
	
	int i, soma = 0;
	
	for(i = 2; i <= 100; i+=2){
		soma += i;
	}
	
	printf("%d", soma);
}

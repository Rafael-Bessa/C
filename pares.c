#include <stdio.h>

int main(){
	
	int i; //Variavel de controle do looping
	
	printf("Imprimir os numeros pares entre 1 e 100\n");
	printf("****************************************\n");
	
	for(i = 1; i <= 100; i++){
		if(i % 2 == 0){
			printf(" %d", i);
		}
	}			
}

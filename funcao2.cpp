#include <stdio.h>

void chamandoFuncao(){
	printf("Chamei!");
}

double divisaoNumeros(double a, double b){
	if(b == 0){
		printf("\nNao posso dividir por 0 amigo");
	}else{
		return a/b;
	}
}

int main(){
	chamandoFuncao();
	
	printf("\n%.2lf", divisaoNumeros(8,14));
}

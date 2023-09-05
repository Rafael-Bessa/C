#include <stdio.h>

//Bubble Sort

int main(){
	
	double lista [] = {3.18, 1.36, -0.12, 0.53, 1.92, 0.98};
	int j,i;
	double aux;
	int tamanho = sizeof(lista) / sizeof(lista[0]);

	for(j = 0; j < tamanho - 1; j++){
		for(i = 0; i < tamanho - j - 1; i++){		
			if(lista[i] > lista[i + 1]){
				aux = lista[i];
				lista[i] = lista[i + 1];
				lista[i + 1] = aux;
			}			
		}			
	}

	for(i = 0; i < tamanho; i++){
		printf("%lf ", lista[i]);
	}
}

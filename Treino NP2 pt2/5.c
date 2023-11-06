#include <stdio.h>

int main(){
	
	int vetor[6] = {8,33,2,1,-6,7};
	int i;
	int aux;
	int j;
	
	for(j = 1; j < 5; j++) {	
		for(i = 0; i < 5; i++){
			if(vetor[i] > vetor[i + 1]){
				aux = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = aux;
				aux = 0;
			}
		}
	}
	
	printf("%d %d %d", vetor[0], vetor[3], vetor[5]);	
}

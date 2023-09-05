
#include <stdio.h>
#include <math.h>

float RaizQuadrada(float n){
	return sqrt(n);
}

int main(){
	
	float numero = 33.1;
	float raiz;
	
	raiz = RaizQuadrada(numero);
	printf("%f", raiz);
		
}

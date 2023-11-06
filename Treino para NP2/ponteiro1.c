#include <stdio.h>

int main(){
	
	int a;
	int *p;
	
	a = 5;
	p = &a;		// P RECEBEU O ENDEREÇO DE MEMORIA ONDE ESTA GUARDADO 'a'
	*p = 6;     //PRA ONDE O P ESTA APONTANDO, EU QUERO MUDAR PRA 6
	
	
	printf("%d", a);
}

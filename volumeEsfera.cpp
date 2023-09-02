#include <stdio.h>

#define PI 3.14159

int main(){
	
	double volume;
	double raio;
	
	printf("Encontrar o volume de uma esfera\n");
	printf("Digite o valor do raio : \n");

	scanf("%lf", &raio);
	
	volume = (4 * PI * raio * raio * raio) / 3;
	
	printf("O volume da esfera e : %.2lf", volume);
}




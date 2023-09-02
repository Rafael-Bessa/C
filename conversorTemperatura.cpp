#include <stdio.h>

int main(){
	
	double celsius;
	double fahrenheit;
	int escolha;
	
	printf("Conversor de temperatura\n");
	printf("Voce quer converter de CELSIUS PARA FAHRENHEIT - 1\n");
	printf("Voce quer converter de FAJRENHEIT PARA CELSIUS - 2\n");
	
	scanf("%d", &escolha);
	
	if(escolha == 1){
		printf("Ok, agora digite a temperatura em CELSIUS\n");
		scanf("%lf", &celsius);
		
		fahrenheit = ((celsius * 9.0) / 5.0) + 32.0;
	
		printf("%.2lf graus Fahrenheit", fahrenheit);
	}
	else if(escolha == 2){
		printf("Ok, agora digite a temperatura em FAHRENHEIT\n");
		scanf("%lf", &fahrenheit);
		celsius = ((fahrenheit - 32.0) * 5.0) / 9.0;
		printf("%.2lf graus Celsius", celsius);
	}
	else{
		printf("Escolha invalida");
	}
	
}

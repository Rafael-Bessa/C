#include <stdio.h>

int main(){
	
	int numeroCorreto = 42, palpite, soma = 0, tentativas = 0;
	
	while (numeroCorreto != palpite){
		
		printf("Chute um numero!\n");
		scanf("%d", &palpite);
		
		if(numeroCorreto < palpite){
			tentativas++;
			printf("Seu chute foi acima, tente um numero menor\n");
		}
		if(numeroCorreto > palpite){
			printf("Seu chute foi abaixo, tente um numero maior\n");
		}
	} 
	
	printf("Parabens acertou o numero secreto!");
}

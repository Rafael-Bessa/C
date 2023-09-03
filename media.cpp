#include <stdio.h>

int main(){
	printf("Escreva um programa em linguagem C que le cinco numeros reais e imprime a media entre esses valores.");
	
	double valores[5], media;
	int i;
	
	for(i=0; i<5; i++){
          printf("\nEntre com o valor %d: ", i+1);
          scanf("%lf",&valores[i]);
          media+=valores[i];
     }
     
     media/=5.;
     printf("\nMedia = %f",media);
 
    getchar(); 
    /* O getchar(); também pode ser usado para pausar a execução
	 de um programa até que o usuário pressione uma tecla,
	  o que pode ser útil para manter uma janela de terminal
	   aberta após a conclusão de um programa, por exemplo.
	*/
	return 0;
	
}

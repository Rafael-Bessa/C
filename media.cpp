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
    /* O getchar(); tamb�m pode ser usado para pausar a execu��o
	 de um programa at� que o usu�rio pressione uma tecla,
	  o que pode ser �til para manter uma janela de terminal
	   aberta ap�s a conclus�o de um programa, por exemplo.
	*/
	return 0;
	
}

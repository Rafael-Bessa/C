/* O n�mero 3025 possui a seguinte caracter�stica: 30 + 25 = 55 -> 55*55 = 3025. Fazer um
programa para obter todos os n�meros de 4 algarismos com a mesma caracter�stica do
n�mero 3025
*/

#include <stdio.h>

int main(){
	
	int i;
	int primeiraParte;
	int segundaParte;
	
	for(i = 1000; i <= 9999; i++){
		
		primeiraParte = i/100;
		segundaParte = i % 1000;

		if((primeiraParte + segundaParte) * (primeiraParte + segundaParte) == i){ 
			printf("%d\n", i);
		}	
	}
}

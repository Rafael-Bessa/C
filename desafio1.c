/* O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025. Fazer um
programa para obter todos os números de 4 algarismos com a mesma característica do
número 3025
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

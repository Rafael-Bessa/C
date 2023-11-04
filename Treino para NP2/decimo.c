#include <stdio.h>

int main(){
	
	int i;
	int array[6] = {1,2,3,4,5,6};
	
	int *ptr = array;
	printf("%d %d %d %d %d %d\n", *ptr);
	
	for(i = 0; i < 6; i++){
		printf("Valor %d: %d\n", i, *ptr);
		
		ptr++;
	}
}

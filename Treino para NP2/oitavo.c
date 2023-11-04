#include <stdio.h>

int main(){
	
	int matriz [3][2] = {{1,2}, {3,4}, {5,6}};
	int i,j;
	
//	00 01     1 2
//	10 11     3 4
//	20 21	  5 6
	
//	printf("%d %d %d %d", matriz[0][0], matriz[0][1], matriz[2][0], matriz[2][1]);

	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", matriz[i][j]);
		}
	}
	
}

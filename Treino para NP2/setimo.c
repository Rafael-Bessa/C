#include <stdio.h>

int main(){
	
	int matriz[2][2] = {{1,6}, {5,10}};
	int i;
	int j;
	
///	00  01
//	10  11

//    1 6
//    5 10
	
//	printf("%d %d %d %d", matriz[0][1], matriz[1][1], matriz[0][0], matriz[1][0]);
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", matriz[i][j] * 3);
		}
	}
}

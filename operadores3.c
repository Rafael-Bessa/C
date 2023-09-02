#include <stdio.h>

int main(){
	int x = 2;
	int y = 10;
	int z = 50;
	
	y /= x;
	
	printf("%d\n", y);
	printf("%d\n", x);
	
	z *= y;
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d", z);
				
}

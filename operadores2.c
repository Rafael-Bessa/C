#include <stdio.h>

int main(){
	int x = 23;
	int y;
	int z;
	
	y = ++x;
	printf("%d\n", y);
	printf("%d\n", x);
	
	z = x++;
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d", z);
		
}

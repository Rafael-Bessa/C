#include <stdio.h>

//fatorial recursivo


int funcao (int n){

	if(n==0){
		return 1;
	}
	else{
		return n*funcao(n-1);
	}
}

int main()

{

	int x=funcao(8);
	
	printf("%d" , x);
	
	return 0;

}

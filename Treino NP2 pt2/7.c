#include <stdio.h>

char primeiro(){
	return "a";
}


char segundo (){
	return "b";
}

int main(){
	printf("main");
	char primeiro = primeiro();
	char segundo = segundo();
	printf("%c %c", primeiro, segundo)
}



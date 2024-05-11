#include <stdio.h>

int main (){

	int x = 5, y = 0;
	
	y = x++ + ++x;

	printf("Valor de X = %d \nValor de Y = %d", x, y);
	return 0;
}
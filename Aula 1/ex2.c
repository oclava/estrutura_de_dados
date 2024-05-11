#include <stdio.h>

int main () {

	int e = 0;
	printf("Qual o número de erros:");
	scanf("%d", &e);

	if(e ==1){
		printf("1 erro detectado");
}
	else{
		printf("%d erros detectados", e);

}}
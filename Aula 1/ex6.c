#include <stdio.h>

int factorial(int num){
    if (num == 1 || num == 0){
       return 1;
    }

   return factorial(num - 1) * num;
}
int main() {
	int n;

	scanf("%d", &n);

	printf("Fatorial de %d é %d\n", n, factorial(n));

	return 0;
}

#include <stdio.h>
#include <math.h>

int main (){
	double a = 0, b = 0, c = 0, delta = 0,r1 = 0, r2 = 0;
	scanf("%lf%lf%lf",&a,&b,&c);

	delta = (b*b)-(4*a*c);
	
	r1 = ((-b) + (sqrt(delta)) )/(2*a);
	r2 = ((-b) - (sqrt(delta)) )/(2*a);


	if(delta <= 0 || a == 0){
		printf("Impossivel calcular\n");
}
	else{
	printf("R1 = %.5lf\n",r1);
	printf("R2 = %.5lf\n",r2);
}

	return 0;

}
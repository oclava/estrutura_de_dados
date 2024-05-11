#include <stdio.h>

int main (){
	int dia = 0, mes = 0, ano = 0, dm = 0, anoI = 0, anoF = 0;
		
	printf("Qual dia você nasceu?");
	scanf("%d",&dia);

	printf("Qual mês você nasceu?");
	scanf("%d",&mes);

	printf("Qual ano você nasceu?");
	scanf("%d",&ano);

	dm = (dia * 100) + mes;
	dm += ano;
	
	//parte o ano no meio

	anoI = dm/100;
	anoF = dm%100;

	dm = anoI + anoF;

	dm = dm%5;

	switch (dm){

	case (0):
		printf("Tímido");
	break;

	case (1):
		printf("Sonhador");
	break;

	case (2):
		printf("Paquerador");
	break;

	case (3):
		printf("Atraente");
	break;

	case (4):
		printf("Irresistível");
	break;

}

	return 0;
}
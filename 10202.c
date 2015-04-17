#include <stdio.h>
#include <stdlib.h>

#define MES 11

int main(int argc, char const *argv[])
{
	int dias = 0;
	int ano = 0;
	int mes = 0;
	int dia = 0;


	scanf("%d", &dias);

	if (!(dias >= 360 && dias <= 390)){

		ano = dias / 365;
		mes = (dias % 365) / 30;
		dia = (dias % 365) % 30; 
		printf("%d ano(s)\n", ano);
		printf("%d mês(es)\n", mes);
		printf("%d dia(s)\n", dia);
	}
	
	
		
	return 0;
}
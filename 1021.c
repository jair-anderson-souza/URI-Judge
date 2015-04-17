#include <stdio.h>
#include <stdlib.h>

#define CINQ 0.5
#define VINT_C 0.25

int main(int argc, char const *argv[])
{
	int valor = 0;
	scanf("%d", &valor);

	if (0 <= valor && valor <= 1000000.00)
	{
		printf("NOTAS:\n");
		int cem = valor / 100;
		int resto = valor % 100;
		printf("%d nota(s) de R$ 100.00\n", cem);
		
		int cinq = resto / 50;
		resto = resto % 50;
		printf("%d nota(s) de R$ 50.00\n", cinq);

		int vinte = resto / 20;
		resto = resto % 20;
		printf("%d nota(s) de R$ 2.00\n", vinte);
		
		int dez = resto / 10;
		resto = resto % 10;
		printf("%d nota(s) de R$ 10.00\n", dez);

		int cinco = resto / 5;
		resto = resto % 5;
		printf("%d nota(s) de R$ 5.00\n", cinco);

		int dois = resto / 2;
		resto = resto % 2;
		printf("%d nota(s) de R$ 2.00\n", dois);

		printf("MOEDAS:\n");
		int um = resto;
		//resto = resto % 1;
		printf("%d moeda(s) de R$ 1.00\n", um);
	
		int cinq_m = resto / 0.5;
		int resto_2 = resto * CINQ;
		printf("%d moeda(s) de R$ 0.50\n", um);

		int vinte_m = resto / 0.25; 
		resto = resto * 0.25;
		printf("%d moeda(s) de R$ 0.25\n", um);

		int dez_m = resto / 0.1;
		resto = resto % 0.1;
		printf("%d moeda(s) de R$ 0.10\n", um);

		int cinco_m = resto / 0.05;
		resto = resto * 0.05;
		printf("%d moeda(s) de R$ 0.05\n", um);

		int um_c = resto / 0.01;
		resto = resto * 0.01;

		printf("%d moeda(s) de R$ 0.01\n", um);

	}
	return 0;
}
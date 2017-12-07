#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CINQ 0.5
#define VINT_C 0.25

int main(int argc, char const *argv[])
{	
	float valor = 0;
	scanf("%f", &valor);

	if (0 <= valor && valor <= 1000000.00)
	{
		printf("NOTAS:\n");
		int cem = valor / 100;
		float resto = fmod(valor, 100);
		printf("%d nota(s) de R$ 100.00\n", cem);
		
		int cinq = resto / 50;
		resto = fmod(resto, 50);
		printf("%d nota(s) de R$ 50.00\n", cinq);

		int vinte = resto / 20;
		resto = fmod(resto, 20);
		printf("%d nota(s) de R$ 20.00\n", vinte);
		
		int dez = resto / 10;
		resto = fmod(resto, 10);
		printf("%d nota(s) de R$ 10.00\n", dez);

		int cinco = resto / 5;
		resto = fmod(resto, 5);
		printf("%d nota(s) de R$ 5.00\n", cinco);

		int dois = resto / 2;
		resto = fmod(resto, 2);
		printf("%d nota(s) de R$ 2.00\n", dois);

		printf("MOEDAS:\n");
		int um = resto / 1;
		resto = fmod(resto, 1);
		printf("%d moeda(s) de R$ 1.00\n", um);
	
		int cinq_m = resto / 0.5;
		resto = fmod(resto, 0.5);
		printf("%d moeda(s) de R$ 0.50\n", cinq_m);

		int vinte_m = resto / 0.25; 
		resto = fmod(resto, 0.25);
		printf("%d moeda(s) de R$ 0.25\n", vinte_m);

		int dez_m = resto / 0.1;
		resto = fmod(resto, 0.1);
		printf("%d moeda(s) de R$ 0.10\n", dez_m);

		int cinco_m = resto / 0.05;
		resto = fmod(resto, 0.05);
		printf("%d moeda(s) de R$ 0.05\n", cinco_m);

		double um_c = resto * 100;
		resto = fmod(resto, 0.01);
		printf("%.0lf moeda(s) de R$ 0.01\n", um_c);
	}
	return 0;
}
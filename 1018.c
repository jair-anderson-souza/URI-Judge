#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int valor = 0;
	
	scanf("%d", &valor);
	
	if (0 < valor && valor < 1000000)
	{
		printf("%.d\n", valor);
		int cem = valor / 100;
		int resto = valor % 100;
		printf("%d nota(s) de R$ 100,00\n", cem);
		
		int cinq = resto / 50;
		resto = resto % 50;
		printf("%d nota(s) de R$ 50,00\n", cinq);

		int vinte = resto / 20;
		resto = resto % 20;
		printf("%d nota(s) de R$ 20,00\n", vinte);
		
		int dez = resto / 10;
		resto = resto % 10;
		printf("%d nota(s) de R$ 10,00\n", dez);

		int cinco = resto / 5;
		resto = resto % 5;
		printf("%d nota(s) de R$ 5,00\n", cinco);

		int dois = resto / 2;
		resto = resto % 2;
		printf("%d nota(s) de R$ 2,00\n", dois);

		printf("%d nota(s) de R$ 1,00\n", resto);
		
		
		
		
	}
	
	

	return 0;
}


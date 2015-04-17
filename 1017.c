#include <stdio.h>
#include <stdlib.h>

#define MEDIA 12

int main(int argc, char const *argv[])
{
	int tempoGasto_h = 0;//km/l
	int velocidadeMedia = 0;//km/h	
	
	scanf("%d", &tempoGasto_h);
	scanf("%d", &velocidadeMedia);

	double k_m = (velocidadeMedia * tempoGasto_h);
	double total =  k_m / MEDIA;
	printf("%.3lf\n", total);

	return 0;
}


#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define PORC 4.0/3

int main(int argc, char const *argv[])
{
	double volume= 0.0;
	double resultado = 0.0;

	scanf("%lf", &volume);

	double cubo = volume * volume * volume;

	resultado = (PORC) * PI * cubo;
	
	printf("VOLUME = %.3lf\n", resultado);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int tempo;
	scanf("%d", &tempo);

	float horas = tempo / 3600; 
	int resto = tempo % 3600;
	
	double mins = resto / 60;
	resto = tempo % 60;
	
	int segundos = resto % 60;
	
	
	printf("%.lf:%.lf:%d\n", horas, mins, segundos); 
	

	
	return 0;
}


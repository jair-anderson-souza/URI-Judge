#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	int maiorAB = (a + b + abs(a - b)) / 2;
	int maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;

	printf("%d eh o maior\n", maiorABC);
	return 0;
}
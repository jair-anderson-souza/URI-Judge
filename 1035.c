#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a,b, c, d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	if(b > c && d > a && c > 0 && d > 0 && (c + d) > (a + b)){
			printf("Valores aceitos\n");
		/*int soma_um = c + d;
		int soma_dois = a + b;
		if(soma_um > soma_dois){
		}*/
	}else{
		printf("Valores nao aceitos\n");
	}

	return 0;
}
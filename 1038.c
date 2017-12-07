#include <stdio.h>
#include <stdlib.h>

void main(int argc, char const *argv[])
{
	int codigo_do_produto, quantidade;

	float total;

	scanf("%d", &codigo_do_produto);
	scanf("%d", &quantidade);

	if(codigo_do_produto == 1){
		total = 4 * quantidade;
	}else if(codigo_do_produto == 2){
		total = 4.5 * quantidade;
	}else if(codigo_do_produto == 3){
		total = 5 * quantidade;
	}else if(codigo_do_produto == 4){
		total = 2 * quantidade;
	}else if(codigo_do_produto == 5){
		total = 1.50 * quantidade;
	}
	printf("Total: R$ %.2f\n", total);
}
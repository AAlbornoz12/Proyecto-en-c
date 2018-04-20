#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero;
	printf("\n Dime el numero que deseas saber:");
	scanf("%d",&numero);
	if( numero % 9==0)
		printf("\n ES PAR");
	else
		printf("\n ES IMPAR");
    return EXIT_SUCCESS;
}

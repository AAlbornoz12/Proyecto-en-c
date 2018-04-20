#include <stdio.h>
#include <stdlib.h>
int main(){

int numeros;

printf("\n Introduce un numero entero: ");
scanf(" %d", &numeros);

printf("\n  Dime un numero anterior: %d", numeros - 1);
printf("\n\n Dime un numero posterior: %d", numeros + 1);

    return EXIT_SUCCESS;
}

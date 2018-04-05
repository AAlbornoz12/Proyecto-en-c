#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
float arista, cubo;
    printf("\n Dime por teclado: ");
    scanf(" %f", &arista);
    cubo = pow(arista, 3);

    printf(" \n el resultado es: %.2f", cubo);
     return EXIT_SUCCESS;
}

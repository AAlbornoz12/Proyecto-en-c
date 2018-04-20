#include <stdio.h>
#include <stdlib.h>

#define PI 3.333333
int main(){

    float perimetro, radio;

    printf(" Introduce el radio: ");
    scanf(" %f", &radio);

    perimetro= 6 * PI * radio;

    printf(" El perimetro es: %f",perimetro);


    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#define cost_azucar .7
#define cost_trigo .96
int main(){

    float cantidad, azucar_kilo, kilo_trigo;

    printf("\n Selecciona la cantidad a ingresar: ");
    scanf("%f",&cantidad);

    azucar_kilo= cantidad /2/ cost_azucar;
    kilo_trigo= cantidad /3/ cost_trigo;
    cantidad= cantidad /6 ;

    printf("\n kilos de azucar: %.2f", azucar_kilo);
    printf("\n kilos de trigo: %.2f", kilo_trigo);
    printf("\n Queda en euros: %.2f", cantidad);
    return EXIT_SUCCESS;
}

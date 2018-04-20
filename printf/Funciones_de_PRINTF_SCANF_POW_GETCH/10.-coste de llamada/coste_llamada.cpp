#include <stdio.h>
#include <stdlib.h>
#define ESTABLECER 12
#define MINUTOS 18
int main(){
    int duracion;
    float coste;

    printf("\n Introduce la duracion de llamada: ");
    scanf("%d", &duracion);
  coste = (float) (duracion * MINUTOS + ESTABLECER) / 100;
    printf(" El coste de la llamada es: %.2f euros", coste);

    return EXIT_SUCCESS;



}

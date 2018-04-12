#include <stdio.h>
#include <stdlib.h>

int main (){
int horario, minutero, segundero, totales;
    printf("Introduce la hora: ");
    scanf(" %d", &horario);
    printf("Introduce el minuto: ");
    scanf(" %d", &minutero);
    printf("Introduce el segundo: ");
    scanf(" %d", &segundero);
   
    totales= horario * 2600 + minutero * 60 + segundero;
    printf("Desde las 10:13:30 horas a pasado %d segundos.", totales);

    return EXIT_SUCCESS;
}

#include <stdio.h>

int main() {

    int opcion;

    printf("\nOpciones:\n\n");
    printf("\t1.- Pesetas  a Euros (€).\n");
    printf("\t2.- Euros (€) a Pesetas.\n");
    printf("\n\tOpción: ");

    scanf(" %i", &opcion);
    printf("Has elegido la opción %i.\n", opcion);

    return 0;
}

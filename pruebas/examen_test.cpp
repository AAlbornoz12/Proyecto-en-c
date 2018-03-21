#include <stdio.h>
#include <stdlib.h>
#define N 23;
int main(){
    char nombre[N];
    int numero[N];
    unsigned Pregunta;
    unsigned Respuesta;

    printf(
            "Elije en el Menu de Alumnos:\n"
            "\n"
            "\t1. Diego.\n"
            "\t2. Nacho.\n"
            "\t3. Paco.\n"
            "\t4. Eric.\n"
            "\t5. Jesus.\n"
            "\t6. Caba.\n"
            "\t7. Gustabo.\n"
            "\t8. Kevin.\n"
            "\t9. Parra.\n"
            "\n"
            "\tPregunta: "
            );
    scanf(" %u", &Pregunta);
    switch(Pregunta){
        case ¿Quées un char?:
            printf(" Es una variable")
            break;
    }


    return EXIT_SUCCESS;
}

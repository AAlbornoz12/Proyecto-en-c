#include <stdio.h>
#include <stdlib.h>
#define N 9;
int main(){
    char nombre[N];
    int numero;
    char Pregunta;
    char Respuesta_correcta;
    char Respuesta_incorrecta;

    printf(
            "Lista de Alumnos:\n"
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
        case Pregunta:
            printf(" Que es Programacion");
            if(Respuesta_correcta)
                printf("Tienes 1 punto si Aciertas");
            else(Respuesta_incorrecta)
              printf("Tienes resta 1 punto si no Aciertas");
            break;
    }


    return EXIT_SUCCESS;
}

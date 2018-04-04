#include <stdio.h>
#include <stdlib.h>

#define N 255

int main(){
    
    /* SON VARIABLES QUE NO USAS 
    
        char nombre[N];
        int numero;
        char Respuesta_incorrecta;
        
    */
    
    int num_pregunta;
    char respuesta[N];
    

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
    scanf(" %u", &num_pregunta);
    
    switch(num_pregunta){ //Suele funcionar más si pones un número en el case
        
        case 1:
            printf("\t¿Qué es Programación?");
            scanf("%s", &respuesta);
            
            if(respuesta)
                printf("\tTienes 1 punto si Aciertas");
            else
              printf("\tTienes 1 punto si no Aciertas");
        break;
        default: printf("\tElige una opción correcta"); //Esto sirve a método de error para cuándo introduzcan opciones incorrectas
    }


    return EXIT_SUCCESS;
}

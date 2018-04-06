#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int auxilio, v1, v2;

    printf("Dime el primer numero que quieras: ");
    scanf(" %d", &v1);
    printf("Dime el segundo numero que quieras: ");
    scanf(" %d", &v2);
    
    printf("Intercambiemos los datos....");
  auxilio=v1;
  v1=v2;
  v2=auxilio;
printf(" Ahora el valor de v1 es: %d",v1);
printf(" Ahora el valor de v2 es: %d",v2);

    return EXIT_SUCCESS;
}

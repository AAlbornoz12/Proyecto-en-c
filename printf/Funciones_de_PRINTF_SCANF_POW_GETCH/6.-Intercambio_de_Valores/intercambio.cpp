#include <stdio.h>
#include <stdlib.h>

int main(){
	int auxilio, v1, v2, v3;
	printf("Dime los contenidos de v1: \n");
	scanf("%d", &v1);
	printf("Dime los contenidos de v2: \n");
	scanf("%d", &v2);
	printf("Dime los contenidos de v3: \n");
	scanf("%d", &v3);

        printf("\n Intercambio de los valores....");

        auxilio= v3;
        v3= v2;
        v2=v1;
        v1=auxilio;
        printf("\n Muestrame, el valor de v1 es: %d",v1);
        printf("\n Muestrame, el valor de v2 es: %d",v2);
        printf("\n Muestrame, el valor de v3 es: %d",v3);
 
        return EXIT_SUCCESS;
}

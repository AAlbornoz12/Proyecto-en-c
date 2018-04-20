#include <stdio.h>
#include <stdlib.h>

int main (){

    int auxilio, a,b,c;
   
	printf("Dime los contenidos de a: \n");
	scanf("%d", &a);
	printf("Dime los contenidos de b: \n");
	scanf("%d", &b);
	printf("Dime los contenidos de c: \n");
	scanf("%d", &c);

        printf("\n Intercambio de los valores....");

        auxilio= c;
        b= a + c;
        a=c * 2;
        c=auxilio * 3;
        printf("\n Muestrame, el valor de a es: %d",a);
        printf("\n Muestrame, el valor de b es: %d",b);
        printf("\n Muestrame, el valor de c es: %d",c);
  return EXIT_SUCCESS;
}

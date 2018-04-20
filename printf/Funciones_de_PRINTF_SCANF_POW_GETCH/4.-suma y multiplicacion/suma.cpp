#include <stdio.h>
#include <stdlib.h>

int main(){
  int n1, n2, multiplica, suma;

  printf("Introduce el primer numero entero: " );
      scanf(" %d", &n1);
printf("Introduce el segundo nuemero entero: " );
    scanf(" %d", &n2);
    
    suma= n1 + n2;
    multiplica= n1 * n2;
    printf(" La suma es: %d", suma);
    printf(" La multiplicacion es: %d", multiplica);

}

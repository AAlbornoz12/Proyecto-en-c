#include <stdio.h>
#include <stdlib.h>
int menu ();
int ingresar (int);
int retirar (int);
void consultar (int);
void main ()
{
 int clave,c=3,opcion,ingreso,saldo=95555;
 while (clave!=9998 && c>=1)
  {
  c--;
  printf ("\nIntroduce tu clave de acceso (4 cifras)");
  scanf ("%i",&clave);
  if (clave!=9998)
   {
   if (c!=0)
   printf ("\nTe quedan %i intentos",c);
   else
   printf ("\nLo siento, no has introducido la clave correcta");
   }
  else
  {
  do
  {
  printf ("\n");
   opcion=menu ();
   switch (opcion)
    {
    case 1:
    saldo=ingresar (saldo);
    printf ("\nEl saldo final de su cuenta son %i euros",saldo);
    break;
    case 2:
    saldo=retirar(saldo);
    break; 
    case 3:
    consultar (saldo);
    break;
    case 4:
    printf ("\nHa elegido la opcion cancelar, Adios");
    break;
    }
   }while (opcion!=4);
   }
 }
}

int main(){

    return EXIT_SUCCESS;
}

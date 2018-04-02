//CAJERO AUTOMATICO//

#include <stdio.h>
int menu ();
int ingresar (int);
int retirar (int);
void consultar (int);
void main ()
{
 int clave,c=3,opcion,ingreso,saldo=3455;
 while (clave!=5543 && c>=1)
  {
  c--;
  printf ("\nIntroduce tu clave de acceso (4 cifras)");
  scanf ("%i",&clave);
  if (clave!=5543)
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

//Funcion menu
int menu ()
{
int opcion;
printf ("\n");
   printf ("**********************************************");
   printf ("\n*   Bienvenido, Elige la accion a realizar:  *");
   printf ("\n*        1. Ingresar dinero                  *");
   printf ("\n*        2. Retirar dinero                   *");  
   printf ("\n*        3. Consultar saldo                  *");
   printf ("\n*        4. Cancelar                         *");
   printf ("\n**********************************************");
   printf ("\n");
   printf ("\nElige la opcion numero: ");
   scanf ("%i",&opcion);
return opcion;
}

//Funcion ingresar
int ingresar (int saldo)
{
int ingreso;
printf ("\nIntroduzca la cantidad que desea ingresar: ");
    scanf ("%i",&ingreso);
    saldo=saldo+ingreso;
printf ("\nLa cantidad ingresada son %i euros",ingreso);
return saldo;
}

//Funcion Retirar
int retirar (int saldo)
{
int retirar;
printf ("\nIntroduzca la cantidad a retirar: ");
    scanf ("%i",&retirar);
     if (retirar>saldo)
     { 
     printf ("\nNo dispone de tanto dinero en su cuenta");
     printf ("\nEl saldo que dispone son: %i euros",saldo);
     }
     else
     {
     saldo=saldo-retirar;
     printf ("\nHa retirado %i euros",retirar);
     printf ("\nSu saldo final son: %i euros",saldo);
     }
return saldo;
}

//Funcion consultar
void consultar (int saldo)
{
printf ("\nDispone de un saldo de %i euros",saldo);
}
#include<stdio.h>
#include<stdlib.h>
#define euro 166.386
int main(){
int pesos;
float euros;
  printf(" \n Dime una cantidad: ");
  scanf(" %d", &pesos);
  euros = pesos / euro;
      printf(" \n equivale a: %.2f euros ", euros);
      return EXIT_SUCCESS;
}

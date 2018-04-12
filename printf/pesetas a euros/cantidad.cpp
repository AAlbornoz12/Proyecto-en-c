#include<stdio.h>
#include<stdlib.h>
#define euro 166.386
#define pesetaa 166.993
int main(){
int pesetas;
float euros;
/*float euroo;
int peseta;*/
  printf(" \n Dime una cantidad en pesetas: ");
  scanf(" %d", &pesetas);
  euros = pesetas / euro;
  printf(" \n equivale a: %.2f euros ", euros);
/*  printf(" \n Dime una cantidad en euros: ");
  scanf(" %d", &euroo);
  peseta = euro/ peseta;
  printf(" \n equivale a: %.2f pesetas ", peseta);*/
      return EXIT_SUCCESS;
}

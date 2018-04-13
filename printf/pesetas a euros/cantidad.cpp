#include<stdio.h>
#include<stdlib.h>

#define ValorPeseta 166.386
#define ValorEuro 0.0060

void PesetaEuro (){
    float euro;
    float total;

    printf(" \n Dime una cantidad de euros: \n");
    scanf(" %f", &euro);
    total = euro*ValorPeseta;
    printf(" \n equivale a: %.2f pesetas\n",total);
}

void EuroPeseta(){
    float peseta;
    float total;

    printf(" \n Dime una cantidad de pesetas: \n");
    scanf(" %f", &peseta);
    total = peseta*ValorEuro;
    printf(" \n equivale a: %.2f pesetas\n",total);
}

void Inicio(){
    int ValorInicial;
    int opcion;

    
     printf("\n Pulsa la opcion que deseas convertir:\n\n");
     printf("\tPulsa 1 Euro a Peseta: \n");
     printf("\tPulsa 2 Peseta a Euro: \n");
     printf("\n\tOpcion: ");
    scanf(" %i", &opcion);
    
    scanf(" %i",&ValorInicial);

    if (ValorInicial == 1)
        EuroPeseta();
    if (ValorInicial == 2)
        PesetaEuro();
}

void menu(){

	
    scanf(" %i", &opcion);

    switch(opcion){
    	case 1:
    		EuroPeseta();
    	break;
    	case 2:
    		PesetaEuro();
    	break;

    default: printf("¡ERROR! Selecciona la opción correcta\n");;
    }

}
int main(){

    Inicio();
    menu();

    return EXIT_SUCCESS;
}

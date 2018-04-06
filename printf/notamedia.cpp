#include <stdio.h>
#include <stdlib.h>

int main (){
    float nota1, nota2, nota3, media;
    
    printf("Dime la Primera Nota mas alta: ");
    scanf(" %f", &nota1);
    printf("Dime la Segunda Nota mas alta: ");
    scanf(" %f", &nota2);
    printf("Dime la Tercera Nota mas alta: ");
    scanf(" %f", &nota3);

    media=(nota1+nota2+nota3)/3;

    printf(" La nota media es: %.2f", media);
    return EXIT_SUCCESS;

}

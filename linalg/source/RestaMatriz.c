#include<stdio.h>


void RestaMatriz()
{
    
    float a11, a12, a21, a22;               
    float b11, b12, b21, b22;               
    float resta11, resta12, resta21, resta22;         
    
    printf("Programa de resta de matrices 2*2");
    
    printf("\n\nEscriba la primera matriz por filas: ");
    scanf("%f %f %f %f", &a11, &a12, &a21, &a22);
    
    printf("\n\nEscriba la segunda matriz por filas: ");
    scanf("%f %f %f %f", &b11, &b12, &b21, &b22);
    
    
    resta11 = a11 - b11;
    resta12 = a12 - b12;
    resta21 = a21 - b21;
    resta22 = a22 - b22;
   

    printf("\n\nLa resta de las dos matriz es igual a :\n\n");
    printf("(resta11 = %f resta12 = %f)\n(resta21 = %f resta22 = %f)",
         resta11, resta12, resta21, resta22);

}

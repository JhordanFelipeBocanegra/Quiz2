#include<stdio.h>


void SumaMatriz()
{
    
    float a11, a12, a21, a22;               
    float b11, b12, b21, b22;               
    float suma11, suma12, suma21, suma22;         
    
    printf("Programa de resta de matrices 2*2");
    
    printf("\n\nEscriba la primera matriz por filas: ");
    scanf("%f %f %f %f", &a11, &a12, &a21, &a22);
    
    printf("\n\nEscriba la segunda matriz por filas: ");
    scanf("%f %f %f %f", &b11, &b12, &b21, &b22);
    
    
    suma11 = a11 + b11;
    suma12 = a12 + b12;
    suma21 = a21 + b21;
    suma22 = a22 + b22;
   

    printf("\n\nLa resta de las dos matriz es igual a :\n\n");
    printf("(suma11 = %f suma12 = %f)\n(suma21 = %f suma22 = %f)",
         suma11, suma12, suma21, suma22);

}

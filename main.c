#include<stdio.h>
#include "linalg/API/linalg.h"

int main (){
	int opcion=0;
	printf("Programa principal\n");
	printf("Seleccione alguna de las opciones\n");
	printf("1. Sumar Matrices\n");
	printf("2. Restar matrices\n");
	printf("3. Determinante 2X2\n");
	printf("4. Determinante 3X3\n");
	scanf("%d",&opcion);
	switch (opcion)
	{
	case 1:
		printf("Sumar matrices\n");
		SumaMatriz();
		break;
	case 2:
		printf("Restar Matrices\n");	
		RestaMatriz();
		break;
	case 3:
		printf("Determinante2x2\n");	
		determinante2x2();
		break;
	case 4:
		printf("Determinante3x3\n");
		determinante3x3();
		break;
	default:
		printf("Opcion no valida\n");
		break;
	}
}

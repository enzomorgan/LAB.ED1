#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float C, P;
	
	printf("Informe o comprimento em polegadas: \n");
	scanf("%f", &P);
	
	C = P * 2.54;
	
	printf("Qual o comprimento em centímentros: %.1f\n\n:", C);
	
	system("pause");
	return(0);
	 
}
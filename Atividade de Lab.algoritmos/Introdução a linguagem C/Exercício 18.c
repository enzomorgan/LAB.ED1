#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float K, M;
	
	printf("Informe a distância em milhas: \n");
	scanf("%f", &M);
	
	K = 1.61 * M;
	
	printf("Qual a distância em km/h: %.1f\n\n", K);
	
	system("pause");
	return(0);
	
}
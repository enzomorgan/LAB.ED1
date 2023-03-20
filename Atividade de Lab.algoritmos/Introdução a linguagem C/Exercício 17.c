#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float K, M;
	
	printf("Infome a velocidade em metros/s: \n");
	scanf("%f", &M);
	
	K = M * 3.6;
	
	printf("Qual a velocidade convertida em km/h: %.1f\n\n", K);
	
	system("pause");
	return(0);
	
}
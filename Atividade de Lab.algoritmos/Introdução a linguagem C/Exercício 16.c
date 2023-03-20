#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float C, K;
	
	printf("Informe a temperatura em graus Kelvin: \n");
	scanf("%f", &K);
	
	C = K - 273.15;
	
	printf("Qual a conversão em graus Celsius: %.1f\n\n", C);
	
	system("pause");
	return(0);
	
}
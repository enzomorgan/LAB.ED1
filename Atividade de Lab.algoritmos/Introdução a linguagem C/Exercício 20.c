#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	float L, M;
	
	printf("Digite o valor em metros cúbicos: ");
	scanf("%f", &M);
	
	L = 1000 * M;
	
	printf("O valor convertido em litros: %.2f\n", L);
	
	system("pause");
	return(0);
}
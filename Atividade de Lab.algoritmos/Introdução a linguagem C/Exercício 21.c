#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float H, M;
	
	printf("Informe a �rea em metros quadrados: ");
	scanf("%f", &M);
	
	H = M * 0.0001;
	
	printf("O valor da �rea em hectares: %.2f\n", H);
	
	system("pause");
	return(0);
}
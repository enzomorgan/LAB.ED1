#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI = 3.14

int main(){
	setlocale(LC_ALL, "");
	
	float A, raio2;
	
	printf("Valor do raio do c�rculo: ");
	scanf("%f", &raio2);
	
	A = PI * raio2;
	
	printf("�rea do c�rculo: %.2f\n", A);
	
	system("pause");
	return(0);
}
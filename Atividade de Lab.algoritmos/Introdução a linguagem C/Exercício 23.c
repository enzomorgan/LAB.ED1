#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI = 3.14

int main(){
	setlocale(LC_ALL, "");
	
	float altura, raio, V;
	
	printf("Informe a altura do cilindro circular: ");
	scanf("%f", &altura);
	printf("Informe o raio: ");
	scanf("%f", &raio);
	
	V = PI * pow(raio,2) * altura;
	
	printf("O volume do cilindro circular: %.2f\n", V);
	
	system("pause");
	return(0);
}
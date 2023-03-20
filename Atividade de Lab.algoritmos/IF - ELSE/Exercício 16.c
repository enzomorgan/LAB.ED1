#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	float x, y, z, calculo;
	char tipo_calculo[15];
	
	printf("Informe a primeira nota: ");
	scanf("%f",&x);
	printf("Informe a segunda nota: ");
	scanf("%f",&y);
	printf("Informe a terceira nota: ");
	scanf("%f",&z);
	printf("O tipo de cálculo que deseja: ");
	scanf("%s", &tipo_calculo);
	
	if(strcmp(tipo_calculo, "GEOMETRICA") == 0){
		calculo = pow((x * y * z), (float)1/3);
		printf("Média Geométrica: %.2f\n", calculo);
	}
	else if(strcmp(tipo_calculo, "PONDERADA") == 0){
		calculo = (( 1 * x ) + (2 * y) + (3 * z)) /6;
		printf("Média Ponderada: %.2f\n", calculo);
	}
	else if(strcmp(tipo_calculo, "HARMONICA") == 0){	
		calculo = 3/(1/x + 1/ 1/y + 1/ 1/z + 1);
		printf("Média Harmônica: %.2f\n", calculo);
	}
	else if (strcmp(tipo_calculo, "ARITMETICA") == 0){
		calculo = (x + y + z) / 3;
		printf("Média Aritmética: %.2f\n", calculo);
	}
	
	system("pause");
	return(0);
}
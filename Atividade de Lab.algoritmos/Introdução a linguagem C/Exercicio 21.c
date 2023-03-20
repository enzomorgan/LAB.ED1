#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI = 3.14

int main(){
	setlocale(LC_ALL, "");
	
	float G, R;
	
	printf("Informe o ângulo em graus: ");
	scanf("%f", &G);
	
	R = G * PI/180;
	
	printf("O valor do ângulo em radianos: %.2f\n", R);
	
	system("pause");
	return(0);
}
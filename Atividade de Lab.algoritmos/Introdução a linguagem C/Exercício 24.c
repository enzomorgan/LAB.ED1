#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float t, p, consumo;
	
	printf("Tempo do produto ligado: ");
	scanf("%f", &t);
	printf("Pot�ncia do aparelho: ");
	scanf("%f", &p);
	
	consumo = (t * p)/1000;
	
	printf("O consumo de energia �: %.2f\n", consumo);
	
	system("pause");
	return(0);
}
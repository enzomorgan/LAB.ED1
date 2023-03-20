#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float KMH, M;
	
	printf("Qual a velocidade do Km por hora: \n");
	scanf("%f", &KMH);
	
	M = KMH / 36.0;
	
	printf("A velocidade em M/s: %.1f\n\n", M);
	
	system("pause");
	return(0);
}
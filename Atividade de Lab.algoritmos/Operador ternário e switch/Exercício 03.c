#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float numero;
	
	printf("Digite um n�mero: ");
	scanf("%f", &numero);
	
	numero >= 0 ? printf("N�mero positivo\n\n") : printf("N�mero negativo\n\n");
	
	system("pause");
	return(0);
}
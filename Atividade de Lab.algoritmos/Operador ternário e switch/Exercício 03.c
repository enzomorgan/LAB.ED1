#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float numero;
	
	printf("Digite um número: ");
	scanf("%f", &numero);
	
	numero >= 0 ? printf("Número positivo\n\n") : printf("Número negativo\n\n");
	
	system("pause");
	return(0);
}
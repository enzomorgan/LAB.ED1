#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float numero;
	
	printf("Digite um número: ");
	scanf("%f", &numero);
	
	numero > 8.8 ? printf("Número é maior\n\n") : printf("Número é menor\n\n");
	
	system("pause");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Informe um número: ");
	scanf("%i", &numero);
	
	numero == 4 ? printf("Número igual a 4\n\n") : printf("Número não é igual a 4\n\n");
	
	system("pause);
	return(0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Informe um n�mero: ");
	scanf("%i", &numero);
	
	numero == 4 ? printf("N�mero igual a 4\n\n") : printf("N�mero n�o � igual a 4\n\n");
	
	system("pause);
	return(0);
}
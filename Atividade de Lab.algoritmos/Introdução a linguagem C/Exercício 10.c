#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1, numero2, numero3, soma;
	
	printf("Digite tres valores: \n");
	scanf("%i", &numero1);
	scanf("%i", &numero2);
	scanf("%i", &numero3);
	
	soma = numero1 + numero2 + numero3;
	
	printf("Resultado da soma: %i %i %i\n", soma);
	
	system("pause");
	return(0);
}
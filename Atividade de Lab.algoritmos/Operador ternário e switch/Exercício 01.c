#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int numero;
	
	printf("Digite um número: "):
	scanf("%d", &numero);
	
	numero % 2 == 0 ? printf("Número par\n\n") : printf("Número ímpar\n\n");
	
	system("pause");
	return(0);
}
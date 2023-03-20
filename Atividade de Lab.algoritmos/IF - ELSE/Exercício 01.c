#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um número: \n");
	scanf("%i", &numero);
	
	if(numero % 2 == 0){
		printf("O número é par!\n\n");
	}
	else if(numero % 2 != 0){
		printf("O número é ímpar!\n\n");
	}
	
	system("pause");
	return(0);
}

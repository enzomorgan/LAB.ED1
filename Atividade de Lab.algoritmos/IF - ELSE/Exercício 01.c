#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um n�mero: \n");
	scanf("%i", &numero);
	
	if(numero % 2 == 0){
		printf("O n�mero � par!\n\n");
	}
	else if(numero % 2 != 0){
		printf("O n�mero � �mpar!\n\n");
	}
	
	system("pause");
	return(0);
}

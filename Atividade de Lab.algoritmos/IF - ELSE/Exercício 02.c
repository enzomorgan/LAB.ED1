#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero1, numero2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &numero1);
	printf("Digite o segundo n�mero: ");
	scanf("%i", &numero2);
	
	if(numero1 > numero2){
		printf("O primeiro n�mero � o maior\n");
	}
	else if(numero2 > numero1){
		printf("O segundo n�mero � o maior\n");
	}
	else if(numero1 == numero2){
        printf("N�meros iguais\n");
	}

	system("pause");
	return(0);
	
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero1, numero2;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &numero1);
	printf("Digite o segundo número: ");
	scanf("%i", &numero2);
	
	if(numero1 > numero2){
		printf("O primeiro número é o maior\n");
	}
	else if(numero2 > numero1){
		printf("O segundo número é o maior\n");
	}
	else if(numero1 == numero2){
        printf("Números iguais\n");
	}

	system("pause");
	return(0);
	
}
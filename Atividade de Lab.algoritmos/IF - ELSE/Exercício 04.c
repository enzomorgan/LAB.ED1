#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("N�meros correspondendo aos dias da semana: ");
	printf("\n");
	printf("1 - Domingo\n");
	printf("2 - Segunda-Feira\n");
	printf("3 - Ter�a-Feira\n");
	printf("4 - Quarta-Feira\n");
	printf("5 - Quinta-Feira\n");
	printf("6 - Sexta-Feira\n");
	printf("7 - S�bado\n");
	printf("\n");
	printf("Escolha um n�mero: ");
	scanf("%i", &numero);
	
	switch(numero)
	{
	case 1:
		printf("Domingo\n");
		break;
	case 2:
		printf("Segunda-Feira\n");
		break;
	case 3:
		printf("Ter�a-Feira\n");
		break;
	case 4:
		printf("Quarta-Feira\n");
		break;
	case 5:
		printf("Quinta-Feira\n");
		break;
	case 6:
		printf("Sexta-Feira\n");
		break;
	case 7:
		printf("S�bado\n");	
	default:
		printf("N�mero invalido!\n");
		break;
	}
	
	system("pause");
	return(0);
	
}
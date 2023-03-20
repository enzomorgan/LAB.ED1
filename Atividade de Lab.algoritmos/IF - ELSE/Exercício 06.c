#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int codigo;
	
	printf("PRODUTOS E SEUS CÓDIGOS: ");
	printf("\n");
	printf("1 - Alimento não-perecível\n");
	printf("2 - Alimento perecível\n");
	printf("3 - Alimento perecível\n");
	printf("4 - Alimento perecível\n");
	printf("5 - Vestuário\n");
	printf("6 - Vestuário\n");
	printf("7 - Higiene pessoal\n");
	printf("8 - Utensílios domésticos\n");
	printf("9 - Utensílios domésticos\n");
	printf("10 - Utensílios domésticos\n");
	printf("\n");
	printf("Digite um código: ");
	scanf("%i", &codigo);
	
	switch(codigo)
	{
	case 1:
		printf("Alimento não-perecível\n\n");
		break;
	case 2:
		printf("Alimento perecível\n\n");
		break;
	case 3:
		printf("Alimento perecível\n\n");	
		break;
	case 4:
		printf("Alimento perecível\n\n");
		break;
	case 5:
		printf("Vestuário\n\n");
		break;
	case 6:
		printf("Vestuário\n\n");
		break;
	case 7:
		printf("Higiene pessoal\n\n");
		break;
	case 8: 
		printf("Utensílios domésticos\n\n");
		break;
	case 9:
		printf("Utensílios domésticos\n\n");
		break;
	case 10:
		printf("Utensílios domésticos\n\n");
		break;
	default:
		printf("Código inválido!\n\n");
		break;
	}
	
	system("pause");
	return(0);
}
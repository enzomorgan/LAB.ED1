#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int codigo;
	
	printf("PRODUTOS E SEUS C�DIGOS: ");
	printf("\n");
	printf("1 - Alimento n�o-perec�vel\n");
	printf("2 - Alimento perec�vel\n");
	printf("3 - Alimento perec�vel\n");
	printf("4 - Alimento perec�vel\n");
	printf("5 - Vestu�rio\n");
	printf("6 - Vestu�rio\n");
	printf("7 - Higiene pessoal\n");
	printf("8 - Utens�lios dom�sticos\n");
	printf("9 - Utens�lios dom�sticos\n");
	printf("10 - Utens�lios dom�sticos\n");
	printf("\n");
	printf("Digite um c�digo: ");
	scanf("%i", &codigo);
	
	switch(codigo)
	{
	case 1:
		printf("Alimento n�o-perec�vel\n\n");
		break;
	case 2:
		printf("Alimento perec�vel\n\n");
		break;
	case 3:
		printf("Alimento perec�vel\n\n");	
		break;
	case 4:
		printf("Alimento perec�vel\n\n");
		break;
	case 5:
		printf("Vestu�rio\n\n");
		break;
	case 6:
		printf("Vestu�rio\n\n");
		break;
	case 7:
		printf("Higiene pessoal\n\n");
		break;
	case 8: 
		printf("Utens�lios dom�sticos\n\n");
		break;
	case 9:
		printf("Utens�lios dom�sticos\n\n");
		break;
	case 10:
		printf("Utens�lios dom�sticos\n\n");
		break;
	default:
		printf("C�digo inv�lido!\n\n");
		break;
	}
	
	system("pause");
	return(0);
}
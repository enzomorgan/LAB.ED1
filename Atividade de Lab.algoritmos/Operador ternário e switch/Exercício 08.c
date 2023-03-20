#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int mes;
	
	printf("Informe um número: \n\n");
	scanf("%i", &mes);
	
	switch(mes)
	{
	case 1:
		printf("Mês escolhido: JANEIRO\n");
		break;
	case 2:
		printf("Mês escolhido: FEVEREIRO\n");
		break;
	case 3:
		printf("Mês escolhido: MARÇO\n");
		break;
	case 4:
		printf("Mês escolhido: ABRIL\n");
		break;
	case 5:
		printf("Mês escolhido: MAIO\n");
		break;
	case 6:
		printf("Mês escolhido: JUNHO\n");
		break;
	case 7:
		printf("Mês escolhido: JULHO\n");
		break;
	case 8:
		printf("Mês escolhido: AGOSTO\n");
		break;
	case 9:
		printf("Mês escolhido: SETEMBRO\n");
		break;
	case 10:
		printf("Mês escolhido: OUTUBRO\n");
		break;
	case 11:
		printf("Mês escolhido: NOVEMRBO\n");
		break;
	case 12:
		printf("Mês escolhido: DEZEMBRO\n");
		break;
	default:
		printf("Mês não existente\n\n");
		break;
	}
	
	system("pause");
	return(0);
}
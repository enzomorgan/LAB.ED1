#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int mes;
	
	printf("Informe um n�mero: \n\n");
	scanf("%i", &mes);
	
	switch(mes)
	{
	case 1:
		printf("M�s escolhido: JANEIRO\n");
		break;
	case 2:
		printf("M�s escolhido: FEVEREIRO\n");
		break;
	case 3:
		printf("M�s escolhido: MAR�O\n");
		break;
	case 4:
		printf("M�s escolhido: ABRIL\n");
		break;
	case 5:
		printf("M�s escolhido: MAIO\n");
		break;
	case 6:
		printf("M�s escolhido: JUNHO\n");
		break;
	case 7:
		printf("M�s escolhido: JULHO\n");
		break;
	case 8:
		printf("M�s escolhido: AGOSTO\n");
		break;
	case 9:
		printf("M�s escolhido: SETEMBRO\n");
		break;
	case 10:
		printf("M�s escolhido: OUTUBRO\n");
		break;
	case 11:
		printf("M�s escolhido: NOVEMRBO\n");
		break;
	case 12:
		printf("M�s escolhido: DEZEMBRO\n");
		break;
	default:
		printf("M�s n�o existente\n\n");
		break;
	}
	
	system("pause");
	return(0);
}
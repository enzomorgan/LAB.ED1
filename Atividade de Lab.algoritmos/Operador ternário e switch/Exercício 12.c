#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float preco;
	int codigo;
	
	printf("Informe o valor do produto: ");
	scanf("%f", &preco);
	printf("Escolha um c�digo de origem de 1 a 10: \n");
	scanf("%i", &codigo);
	
	switch(codigo)
	{
	case 1:
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: SUL\n\n");
		break;
	case 2: 
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: NORTE\n\n");
		break;
	case 3:
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: LESTE\n\n");
		break;
	case 4:
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: OESTE\n\n");
		break;
	case 5:
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: NORDESTE\n\n");
		break;
	case 6:
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: NORDESTE\n\n");
		break;
	case 7:
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: SUDESTE\n\n");
		break;
	case 8:
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: SUDESTE\n\n");
		break;
	case 9:
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: SUDESTE\n\n");
		break;
	case 10:
		printf("O produto custa: %.2f\n", preco);
		printf("PROCED�NCIA: CENTRO-OESTE\n\n");
		break;
	default:
		printf("Proced�ncia n�o existente!!!\n\n");
		break;
	}
	
	system("pause");
	return(0);
}
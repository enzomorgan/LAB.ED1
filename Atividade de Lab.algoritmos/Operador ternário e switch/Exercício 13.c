#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	float preco, aumento;
	char situacao;
	int categoria;
	
	printf("Valor do produto: R$ ");
	scanf("%f", &preco);
	printf("R-Produtos de refrigera��o\n\n");
	printf("N-Produtos que n�o s�o de regrigera��o\n");
	printf("Informe a situa��o: ");
	scanf("%s", &situacao);
	printf("Escolha uma categoria de 1 a 3 dos produtos: \n");
	scanf("%i", &categoria);
	
	switch(categoria)
	{
	case 1:
		preco <= 25.00;
		printf("Categoria = LIMPEZA\n");
		aumento = preco * 1.5;
		printf("Pre�o com o aumento: R$ %.2f\n", aumento);
		break;
		if(preco > 25.00){
			printf("Categoria = LIMPEZA\n");
			aumento = preco * 1.12;
			printf("Pre�o com o aumento: R$ %.2f\n", aumento);
		}
	case 2:
		preco <= 25.00;
		printf("Categoria = ALIMENTA��O\n");
		aumento = preco * 1.8;
		printf("Pre�o com o aumento: R$ %.2f\n", aumento);
		break;
		if(preco > 25.00){
			printf("Categoria = ALIMENTA��O\n");
			aumento = preco * 1.15;
			printf("Pre�o com o aumento: R$ %.2f\n", aumento);
		}
	case 3:
		preco <= 25.00;
		printf("Categoria = VESTU�RIO\n");
		aumento = preco * 1.10;
		printf("Pre�o com o aumento: R$ %.2f\n", aumento);
		break;
		if(preco > 25.00){
			printf("Categoria = VESTU�RIO\n");
			aumento = preco * 1.18;
			printf("Pre�o com o aumento: R$ %.2f\n", aumento);
		}
	default:
		printf("Categoria n�o existente!!!\n\n");
		break;
	}
	
	system("pause");
	return(0);
}
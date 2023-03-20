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
	printf("R-Produtos de refrigeração\n\n");
	printf("N-Produtos que não são de regrigeração\n");
	printf("Informe a situação: ");
	scanf("%s", &situacao);
	printf("Escolha uma categoria de 1 a 3 dos produtos: \n");
	scanf("%i", &categoria);
	
	switch(categoria)
	{
	case 1:
		preco <= 25.00;
		printf("Categoria = LIMPEZA\n");
		aumento = preco * 1.5;
		printf("Preço com o aumento: R$ %.2f\n", aumento);
		break;
		if(preco > 25.00){
			printf("Categoria = LIMPEZA\n");
			aumento = preco * 1.12;
			printf("Preço com o aumento: R$ %.2f\n", aumento);
		}
	case 2:
		preco <= 25.00;
		printf("Categoria = ALIMENTAÇÃO\n");
		aumento = preco * 1.8;
		printf("Preço com o aumento: R$ %.2f\n", aumento);
		break;
		if(preco > 25.00){
			printf("Categoria = ALIMENTAÇÃO\n");
			aumento = preco * 1.15;
			printf("Preço com o aumento: R$ %.2f\n", aumento);
		}
	case 3:
		preco <= 25.00;
		printf("Categoria = VESTUÁRIO\n");
		aumento = preco * 1.10;
		printf("Preço com o aumento: R$ %.2f\n", aumento);
		break;
		if(preco > 25.00){
			printf("Categoria = VESTUÁRIO\n");
			aumento = preco * 1.18;
			printf("Preço com o aumento: R$ %.2f\n", aumento);
		}
	default:
		printf("Categoria não existente!!!\n\n");
		break;
	}
	
	system("pause");
	return(0);
}
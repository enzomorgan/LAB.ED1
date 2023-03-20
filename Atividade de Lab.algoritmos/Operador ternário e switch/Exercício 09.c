#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float preco_final, produto;
	int pagamento;
	
	printf("Informe o valor do produto: ");
	scanf("%f", &produto);
	printf("Informe a forma de pagamento: ");
	scanf("%i", &pagamento);
	
	switch(pagamento)
	{
	case 1:
		preco_final = produto - (produto * 10/100);
		printf("Preço final do produto: R$%.2f\n", preco_final);
		break;
	case 2:
		preco_final = produto * 1.10;
		printf("Preço final do produto: R$%.2f\n", preco_final);
		break;
	default:
		printf("Não existe esse caso\n\n");
		break;
	}
	
	system("pause");
	return(0);
}
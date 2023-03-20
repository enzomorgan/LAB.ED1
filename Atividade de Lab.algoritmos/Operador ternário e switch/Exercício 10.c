#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float valor, valor_total;
	int comprador;
	
	printf("Valor das compras: ");
	scanf("%f", &valor);
	printf("Comprador: ");
	scanf("%i", &comprador);
	
	switch(comprador)
	{
	case 1:
		printf("Comprador: COMUM\n");
		printf("Valor total pago: %.2f\n", valor);
		printf("Valor sem desconto\n\n");
		break;
	case 2:
		printf("Comprador: FUNCIONÁRIO\n");
		valor_total = valor - (valor * 8/100);
		printf("Valor total pago: %.2f\n", valor_total);
		break;
	case 3:
		printf("Comprador: CLIENTE VIP\n");
		valor_total = valor - (valor * 12/100);
		printf("Valor total pago: %.2f\n", valor_total);
	default:
		printf("Opção não existente!!\n\n");
		break;
	}
	
	system("pause");
	return(0);
	
	}
	
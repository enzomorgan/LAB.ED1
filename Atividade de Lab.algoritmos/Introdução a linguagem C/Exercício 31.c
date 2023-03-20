#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float valor, desconto, comissao_desc, comissao_vis;
	
	printf("Valor do total do produto: ");
	scanf("%f", &valor);
	
	desconto = valor * 0.10;
	printf("Total pago à vista com desconto: %.2f\n", desconto);
	
	printf("Valor parcelado em 3x sem juros: \n\n");
	printf("Valor da primeira parcela: %.2f\n", valor/3);
	printf("Valor da segunda parcela: %.2f\n", valor/3);
	printf("Valor da terceira parcela: %.2f\n", valor/3);
	
	comissao_desc = desconto * 0.5;
	printf("Comissão do vendedor na venda à vista: %.2f\n", comissao_desc);
	
	comissao_vis = valor * 0.3;
	printf("Comissão do vendedor na venda parcelada: %.2f\n", comissao_vis);
		
	system("pause");
	return(0);	
}
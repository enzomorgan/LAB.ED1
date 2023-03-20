#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	int dias;
	float quantia_dia = 30.00, desconto, quantia_paga;
	
	printf("Dias de trabalho do encanador: ");
	scanf("%i", &dias);
	
	desconto = quantia_dia * 0.08;
	quantia_paga = (float)desconto * dias;
	
	printf("Quanto foi para o imposto de renda: %.2f\n", desconto);
	printf("Quantía líquida que foi paga: %.2f", quantia_paga);
	
	system("pause");
	return(0);
}
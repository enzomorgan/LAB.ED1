#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	float produto, desconto;
	
	printf("Informe o valor do produto: ");
	scanf("%f", &produto);
	
	desconto = produto * 0.12;
	
	printf("O valor final: %.2f\n", desconto);
	
	system("pause");
	return(0);
}
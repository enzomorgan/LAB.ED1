#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	float compras, bonus;
	int i;
	char nome[20];
	
	for(i = 0; i < 12; i++){
		printf("Digite o nome do cliente: ");
		scanf("%s", &nome);
	}
	for(i = 0; i < 12; i++){
		printf("Valor das compras de cada cliente: ");
		scanf("%f", &compras);
	}
	for(i = 0; i < 12; i++){
		if(compras >= 3.000){
			bonus = (compras*(10/100));
			printf("B�nus = %f", bonus);
			printf("Parab�ns cliente %s", nome);
		}
		else(compras < 3.000){
			printf("Sem b�nus de 10%");
		}
	}
}
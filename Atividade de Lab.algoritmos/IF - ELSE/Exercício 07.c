#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int idade;
	
	printf("Idade e valor: ");
	printf("\n");
	printf("At� 10 anos - R$ 30,00\n");
	printf("Acima de 10 at� 29 anos - R$60,00\n");
	printf("Acima de 29 at� 45 anos - R$120,00\n");
	printf("Acima de 45 at� 59 anos - R$150,00\n");
	printf("Acima de 59 anos - R$ 300,00\n");
	printf("\n");
	printf("Insira uma idade: ");
	scanf("%i", &idade);
	
	if(idade == 10){
		printf("O valor a ser pago � de R$30,00\n");
	}
	else if(idade > 10 && idade <= 29){
		printf("O valor a ser pago � de R$60,00\n");
	}
	else if(idade > 29 && idade <= 45){
		printf("O valor a ser pago � de R$120,00\n");
	}
	else if(idade > 45 && idade <= 59){
		printf("O valor a ser pago � de R$150,00\n");
	}
	else if(idade > 59){
		printf("O valor a ser pago � de R$300,00\n");
	}
	
	system("pause");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>

int main(){
	int anoatual, anonasc, idade; 
	
	printf("Digite a idade da pessoa: \n");
	scanf("%i", &idade);
	
	printf("Digite o ano atual: \n");
	scanf("%i", &anoatual);
	
	anonasc = anoatual - idade;
	
	printf("Qual o ano do nascimento: %i\n\n", anonasc);
	
	system("pause");
	return(0);
		
}
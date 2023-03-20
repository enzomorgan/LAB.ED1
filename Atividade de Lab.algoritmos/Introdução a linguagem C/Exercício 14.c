#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
	
	char nome[30], endereco[50];
	float cep[10], telefone[15];
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite seu endereco: ");
	scanf("%s", &endereco);
	printf("Digite o CEP e seu numero de telefone: \n");
	scanf("%s%s", &cep, &telefone);
	
	system("pause");
	return(0);
}
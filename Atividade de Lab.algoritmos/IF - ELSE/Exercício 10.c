#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float salario, prestacao, emprestimo;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%f", &salario);
	printf("Insira o valor da presta��o: ");
	scanf("%f", &prestacao);
	
	emprestimo = (salario * 20)/100;
	
	if(prestacao >= emprestimo){
		printf("Empr�stimo n�o concedido\n");
	}
	else{
		printf("Empr�stimo concedido\n");
	}
	
	system("pause");
	return(0);
}
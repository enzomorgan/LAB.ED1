#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float salario, prestacao, emprestimo;
	
	printf("Digite o salário do funcionário: ");
	scanf("%f", &salario);
	printf("Insira o valor da prestação: ");
	scanf("%f", &prestacao);
	
	emprestimo = (salario * 20)/100;
	
	if(prestacao >= emprestimo){
		printf("Empréstimo não concedido\n");
	}
	else{
		printf("Empréstimo concedido\n");
	}
	
	system("pause");
	return(0);
}
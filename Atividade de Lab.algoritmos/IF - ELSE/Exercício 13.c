#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int matriculaFuncionario;
	float salarioAtual, aumento, novoSalario;
	
	printf("Digite a matr�cula do funcion�rio: ");
	scanf("%i", &matriculaFuncionario);
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%f", &salarioAtual);
	
	if(salarioAtual <= 400.00){
		aumento = salarioAtual * (16.0/100.0);
	}
	else if((salarioAtual >= 400.01) && (salarioAtual <= 700.00)){
		aumento = salarioAtual * (12.0/100.0);
	}
	else if((salarioAtual >= 700.01) && (salarioAtual <= 1000.00)){
		aumento = salarioAtual * (10.0/100.00);
	}
	else if((salarioAtual <= 1000.01) && (salarioAtual <= 1800.01)){
		aumento = salarioAtual * (8.0/100.00);
	}
	else if((salarioAtual <= 1800.01) && (salarioAtual <= 2500.00)){
		aumento = salarioAtual * (4.0/100.00);
	}
	else if(salarioAtual >= 2500.00){
		aumento = salarioAtual * (0.0/100.00);
	}
	
	novoSalario = salarioAtual + aumento;
	
	printf("\nMatr�cula do funcion�rio: %i\n", matriculaFuncionario);
	printf("Sal�rio anterior: R$%.2f\n", salarioAtual);
	printf("Sal�rio aumentado: R$%.2f\n\n", novoSalario);
	
	system("pause");
	return(0);
	
	
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float hora, hora_mes, salario, funcionario;
	
	printf("Valor da horas trabalhadas: ");
	scanf("%f", &hora);
	printf("Número de horas trabalhadas: ");
	scanf("%f", &hora_mes);
	
	funcionario = hora + hora_mes;
	salario = funcionario * 0.10;
	
	printf("Valor pago a	o funcionário: %.2f\n", funcionario);
	printf("Valor com o acréscimo: %.2f", salario);
	
	system("pause");
	return(0);
}
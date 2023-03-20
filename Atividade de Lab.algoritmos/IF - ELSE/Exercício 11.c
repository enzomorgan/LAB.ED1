#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float bonus, salario;
	int tempo;
	
	printf("Informe o salário do funcionário: ");
	scanf("%f", &salario);
	printf("Tempo de trabalho na empresa: ");
	scanf("%i", &tempo);
	
	if(tempo >= 5){
		bonus = salario * 0.16;
		printf("Bônus recebido: %.2f\n", bonus);
	}
	else if(tempo < 5){
		bonus = salario * 0.10;
		printf("Bônus recebido: %.2f\n", bonus);
	}
	
	system("pause");
	return(0);
}
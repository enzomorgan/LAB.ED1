#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float premio = 780.000, ganhador1, ganhador2, ganhador3;
	
	ganhador1 = premio * 0.46;
	printf("Valor recebido pelo primeiro ganhador: %.2f\n", ganhador1);
	
	ganhador2 = premio * 0.32;
	printf("Valor recebido pelo segundo ganhador: %.2f\n", ganhador2);
	
	ganhador1 = premio * 0.22;
	printf("Valor recebido pelo terceiro ganhador: %.2f\n", ganhador3);
	
	system("pause");
	return(0);
}
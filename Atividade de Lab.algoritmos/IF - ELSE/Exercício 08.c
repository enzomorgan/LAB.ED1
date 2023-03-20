#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL, "");
		
	float h, peso, r;
	char sexo;
	
	printf("Digite sua altura: ");
	scanf("%f", &h);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite o sexo [M] ou [F]: ");
	scanf("%s", &sexo);
	
	if(sexo == 'M'){
		r = ((72.7 * h) - 58);
	}
	else if(sexo == 'F'){
		r = ((62.1 * h) - 44.7);
	}
	
	printf("O seu peso ideal é: %f\n", r);
	
	system("pause");
	return(0);
}
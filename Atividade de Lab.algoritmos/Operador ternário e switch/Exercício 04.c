#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float numero;
	
	printf("Digite um n�mero: ");
	scanf("%f", &numero);
	
	numero > 8.8 ? printf("N�mero � maior\n\n") : printf("N�mero � menor\n\n");
	
	system("pause");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int numero;
	
	printf("Digite um n�mero: "):
	scanf("%d", &numero);
	
	numero % 2 == 0 ? printf("N�mero par\n\n") : printf("N�mero �mpar\n\n");
	
	system("pause");
	return(0);
}
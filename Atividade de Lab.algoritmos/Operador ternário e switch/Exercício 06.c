#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LCC_ALL, "");
	
	char caractere;
	
	printf("Informe um caractere: ");
	scanf("%c", &caractere);
	
	isalnum(caractere) ? printf("O caractere lido � alfanum�rico\n\n") : printf("O caractere lido n�o � alfanum�rico\n\n");
	
	system("pause");
	return(0);
}
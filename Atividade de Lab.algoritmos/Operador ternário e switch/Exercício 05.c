#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int n;
	
	printf("Digite os n�meros: ");
	scanf("%i%i", &n);
	
	n > 0 ? printf("Maior n�mero: \n") : ("N�o � o maior n�mero: \n");
	
	system("pause\n\n");
	return(0);
}
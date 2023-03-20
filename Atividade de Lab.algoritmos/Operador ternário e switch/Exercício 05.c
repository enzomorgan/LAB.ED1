#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int n;
	
	printf("Digite os números: ");
	scanf("%i%i", &n);
	
	n > 0 ? printf("Maior número: \n") : ("Não é o maior número: \n");
	
	system("pause\n\n");
	return(0);
}
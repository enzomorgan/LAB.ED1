#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int n, raiz;
	
	do{
		printf("Digite um número positivo: ");
		scanf("%i",&n);
		
		raiz = sqrt(n);
		
		printf("Raiz aproximada: %i\n\t", raiz);
	}while(n != 0);
	
	system("pause\n\n");	
	return(0);
}
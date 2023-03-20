#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, ant = 1, suc = 1;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	ant = numero - ant;
	suc = numero + suc;
	
	printf("Qual o antecessor do numero: %i\n", ant);
	printf("Qual o sucessor do numero: %i\n", suc);
	
	system("pause");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	   	
	int numero, i, maior, menor;
	
	printf("Digite 10 n�meros: \n");
	
	for(i = 1; i <= 10; i++){
		printf("%d: ", i);
		scanf("%d", &numero);
		
		if(numero > maior){
			maior = numero;
		}
		else if(numero < menor){
			menor = numero;
		}
	}
	
	printf("O maior n�mero: %d\n", maior);
	printf("O menor n�mero: %d\n", menor);
	
	system("pause");
	return(0);
}
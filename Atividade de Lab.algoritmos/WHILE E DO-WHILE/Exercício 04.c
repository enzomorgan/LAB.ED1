#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero = 4, i;
	
	while(numero > 0){
		printf("Digite um número positivo: ");
		scanf("%i", &numero);
		
		if(numero > 0){
			for(i = 1; i <= 10; i++){
				printf("%i x %i = %i\n", numero, i, numero * i);
			}
		}	
	}
	
	system("pause");
	return(0);
}
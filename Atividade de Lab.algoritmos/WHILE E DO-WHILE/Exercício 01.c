#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero, soma = 0;
	
	while(soma <= 40){
		printf("Digite um número a ser somado: ");
        scanf("%d", &numero);

        soma = soma + numero;
	}
	
	printf("\nSoma dos valores: %d\n", soma);
	
	system("pause");
    return(0);
}
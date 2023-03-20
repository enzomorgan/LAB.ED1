#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero, soma, i;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	
	soma = 1;
	for(i = 2; i <= (numero/2.0+1); i++){
		if(numero % i == 0){
			printf("%d + ", i);
			soma += i;
		}
	}
	
	printf("Soma dos números é: %d", soma);
	
	system("pause");
	return(0);
}
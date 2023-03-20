#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	   	
	float valor, media, somadosValores = 0;
	int i;
	
	printf("Digite 10 valores reais: \n");
	
	for(i = 1; i <= 10; i++){
		scanf("%f", &valor);
		somaDosValores += valor;
	}
	
	media = somaDosValores/10.0;
	
	printf("\nMédia: %.2f\n\n", media);
	
	system("pause");
	return(0);
}
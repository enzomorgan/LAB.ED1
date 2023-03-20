#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float numero1, numero2, soma, produto, quadrado, raiz, raiz2, seno;
	int modulo;
	
	printf("Informe dois valores: \n");
	scanf("%f %f", &numero1, &numero2);
	
	soma = numero1 + numero2;
	printf("Soma dos número: %.2f\n", soma);
	
	produto = numero1 * (numero2 * numero2);
	printf("O produto do primeiro pelo quadrado do segundo: %.2f\n", produto);
	
	quadrado = pow(numero1,2);
	printf("O quadrado do primeiro número: %.2f\n", quadrado);
	
	raiz = sqrt(numero1);
	raiz2 = sqrt(numero2);
	printf("Raiz do primeiro número: %.2f\n", raiz);
	printf("Raiz do segundo número: %.2f\n", raiz2);
	
	seno = sin(numero1 - (numero2 * numero2));
	printf("Seno da diferença do primeiro pelo segundo: %.2f\n", seno);
	
	modulo = abs(numero1);
	printf("Módulo do primeiro número: %i\n", modulo);
	
	system("pause");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3, somadosQuadrados;
	
	scanf("%i %i %i", &n1, &n2, &n3);
	
	somadosQuadrados = (n1 * n1) + (n2 * n2) + (n3 * n3);
	
	printf("Resultado da soma dos quadrados: %i\n", somadosQuadrados);
	
	system("pause");
	return(0);
}
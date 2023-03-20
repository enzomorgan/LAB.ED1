#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float numero, potencia, raiz;
	
	scanf("%f", &numero);
	
	if(numero > 1){
		potencia = pow(numero,2);
		raiz = sqrt(numero);
	}
	
	printf("Potência = %f\n", potencia);
	printf("Raiz Quadrada = %f\n", raiz);
	
	system("pause");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>

int main(){
	float numero1, numero2, numero3, numero4, media;
	
	printf("Digite quatro valores: \n");
	scanf("%f", &numero1);
	scanf("%f", &numero2);
	scanf("%f", &numero3);
	scanf("%f", &numero4);
	
	media = (numero1 + numero2 + numero3 + numero4) / 4;
	
	printf("Media aritmetica: %f: \n", media);
	
	system("pause");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int N, E = 1, i, j, num, fatorial;
	
	printf("Digite um numero: ");
	scanf("%d", &N);

	for(i = 1; i <= N; ++i){
		num = 1.0/i;
		fatorial = 1;
	for(j = num; j > 0; --j){ 
		fatorial *= num;
	}
		E += fatorial;   	
	}

	printf("Valor de 'E': %d\n\n", E);
	
	system("pause");
	return(0);
}	
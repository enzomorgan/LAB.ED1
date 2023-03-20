#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int n, fatorial = 1, i;
	
	printf("Digite um número: ");
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++){
		fatorial = fatorial * i;
	}
	
	printf("Fatorial de %i: %i\n\n", n);
	
	system("pause");
	return(0);
}
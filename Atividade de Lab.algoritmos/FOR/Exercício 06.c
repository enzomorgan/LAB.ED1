#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, soma = 0;  

	for(i = 2; i <= 50; i++){  
		if(i % 2 == 0){
		soma += i;
		}  
	}  

	printf("Soma dos 50 primeiros numeros: %d\n", soma);  
	
	system("pause\n");
	return(0);  
}
#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int N, i;
	
		do{
		printf("Digite um valor inteiro e positivo: ");
		scanf("%i", &N);
		
		if(N <= 0){
			printf("\n\tValor invalido!\n\n");
			system("pause");
		}
	}while(N <= 0);

	for(i = N; i >= 0; i--){
		printf("%i\n", i);
	} 
	
	system("pause");
	return(0);
}
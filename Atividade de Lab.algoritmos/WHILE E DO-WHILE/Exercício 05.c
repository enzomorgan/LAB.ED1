#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	   	
	int num, i, primo = 1;
	
	do{
		printf("Informe um número: ");
		scanf("%d", &num);
	}while(num <= 1);
	
	for(i = 2; i <= numero/2; i++){
		if((numero % i) == 0){
			primo = 0;
		}
	}
	
	if(primo){
		printf("É primo\n");
	}
	else{
		printf("Não é primo\n");
	}
	
	system("pause");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero, i, primo = 1;
	
	printf("Digite um n�mero inteiro e positivo: ");
	scanf("%d", &numero);
	
	for(i = 2; i <= numero/2; i++){
		if((numero % i) == 0){
			primo = 0;
		}
	}
	
	if(primo){
		printf("� primo\n");
	}
	else{
		printf("N�o � primo\n");
	}
	
	system("pause");
	return(0);
}
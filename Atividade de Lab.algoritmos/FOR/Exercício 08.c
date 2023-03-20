#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero, i;
	
	printf("Informe um número inteiro: ");
	scanf("%d",&numero);
	   	
	 for(i = 1; i <= numero; i++){
    	if(numero % i == 0){
      	  printf("%d\n", i);
    	}
  	  }
	
		
	system("pause");	
	return(0);						 	
}
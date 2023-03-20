#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char tecla = 'x';
	
	do{
		printf("Informe uma tecla: ");
		scanf("%s", &tecla);
	}while(tecla != 'x');
	
	system("pause\n\n");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	char sexo;
	
	printf("Informe o seu sexo: ");
	scanf("%c", &sexo);
	
	switch(sexo){
		case 'M':
		case 'm':
			printf("Sexo masculino\n\n"); 		
		break;
		case 'F':
		case 'f':
			printf("Sexo feminino\n\n"); 	
		break;
	}
	
	system("pause");
	return(0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float nota1, nota2, nota3;
	
	printf("Digite tr�s valores: \n");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	
	float soma = nota1 + nota2;
	
	if(soma == nota3){
		printf("A soma de %.1f + %.1f � %.1f\n\n", nota1, nota2, nota3);
	}
	else{
		printf("A soma de nota1 + nota2 n�o resulta em nota3!\n\n");
	}
	
	system("pause");
	return(0);
	
}
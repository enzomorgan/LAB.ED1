#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float a, b, c;
	
	printf("Primeiro valor: ");
	scanf("%f",&a);
	printf("Segundo valor: ");
	scanf("%f",&b);
	printf("Terceiro valor: ");
	scanf("%f",&c);
	
	if(pow(a,2) == pow(b,2) + pow(c,2)){
		printf("Tri�ngulo Ret�ngulo\n");
	}
	else if(pow(a,2) > pow(b,2) + pow(c,2)){
		printf("Tri�ngulo Obtus�ngulo\n");
	}
	else if(pow(a,2) < pow(b,2) + pow(c,2)){
		printf("Tri�ngulo Acut�ngulo\n");
	}
	
	system("pause");
	return(0);
}
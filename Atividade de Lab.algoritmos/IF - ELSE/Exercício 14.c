#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	float altura, peso;
	
	printf("Informe a altura: ");
	scanf("%f", &altura);
	printf("Informe o peso: ");
	scanf("%f", &peso);
	
	if(altura < 1.20 && peso <= 60.00){
		printf("Classifica��o A\n");
	}
	else if(altura <= 1.20 && peso > 60.00 && peso <= 90.00){
		printf("Classifica��o D\n");
	}
	else if(altura <= 1.20 && peso > 90.00){
		printf("Classifica��o G\n");
	}
	else if(altura > 1.20 && altura <= 1.70 && peso <= 60.00){
		printf("Classifica��o B\n");
	}
	else if(altura == 1.20 && altura <= 1.70 && peso > 60.00 && peso <= 90.00){
		printf("Classifica��o E\n");
	}
	else if(altura > 1.20 && altura <= 1.70 && peso > 90.00){
		printf("Classifica��o H\n");
	}
	else if(altura > 1.70 && peso <= 60.00){
		printf("Classifica��o C\n");
	}
	else if(altura > 1.70 && peso > 60.00 && peso < 90.00){
		printf("Classifica��o F\n");
	}
	else if(altura > 1.70 && peso > 90.00){
		printf("Classifica��o I\n");
	}
	
	system("pause");
	return(0);
}
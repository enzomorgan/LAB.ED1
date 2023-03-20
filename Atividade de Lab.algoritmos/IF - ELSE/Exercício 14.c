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
		printf("Classificação A\n");
	}
	else if(altura <= 1.20 && peso > 60.00 && peso <= 90.00){
		printf("Classificação D\n");
	}
	else if(altura <= 1.20 && peso > 90.00){
		printf("Classificação G\n");
	}
	else if(altura > 1.20 && altura <= 1.70 && peso <= 60.00){
		printf("Classificação B\n");
	}
	else if(altura == 1.20 && altura <= 1.70 && peso > 60.00 && peso <= 90.00){
		printf("Classificação E\n");
	}
	else if(altura > 1.20 && altura <= 1.70 && peso > 90.00){
		printf("Classificação H\n");
	}
	else if(altura > 1.70 && peso <= 60.00){
		printf("Classificação C\n");
	}
	else if(altura > 1.70 && peso > 60.00 && peso < 90.00){
		printf("Classificação F\n");
	}
	else if(altura > 1.70 && peso > 90.00){
		printf("Classificação I\n");
	}
	
	system("pause");
	return(0);
}
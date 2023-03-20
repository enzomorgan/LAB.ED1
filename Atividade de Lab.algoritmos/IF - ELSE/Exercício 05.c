#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int livrosComprados, pontuacao;
	
	printf("Digite o total de livros comprados no mês: ");
	scanf("%i", &livrosComprados);
	
	if(livrosComprados == 1){
		pontuacao = 5;
	}
	else if(livrosComprados == 2){
		pontuacao = 15;
	}
	else if(livrosComprados == 3){
		pontuacao = 30;
	}
	else if(livrosComprados >= 4){
		pontuacao = 60;
	}
	
	printf("\n\tTotal de pontos: %i\n\n", pontuacao);
	
	system("pause");
	return(0);
	
}
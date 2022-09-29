#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <stdbool.h>
#define TAM 10


int main(){
	setlocale(LC_ALL, "");
	
	//declarando variáveis
	int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
	int valorProcurado, i, posicaoEncontrada;
	bool valorEncontrado;
	
	//laço de repetição para imprimir o vetor
	for(i = 0; i < TAM; i++){
		printf("%d\n", vetor[i]);
	}
	
	//lendo o valor que deseja ser procurado
	printf("Qual número deseja encontrar?\n");
	scanf("%d", &valorProcurado);
	
	//laço para pesquisar se o valor digitado existe
	for(i = 0; i < TAM; i++){
		if(vetor[i] == valorProcurado){
			valorEncontrado = true; //valor encontrado é verdadeiro
			posicaoEncontrada = i;
		}   	
	}
	
	//estrutura para apresentar a posição, se o valor digitado for verdadeiro
	if(valorEncontrado){
		printf("O valor foi encontrado na posição: %d\n", posicaoEncontrada);
	}
	else{
		printf("Valor não encontrado\n");
	}
	
	system("pause\n\n");
	return 0;
}
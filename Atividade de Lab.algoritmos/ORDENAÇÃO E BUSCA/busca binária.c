#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 10

int main(){
	setlocale(LC_ALL, "");
	
	int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
	int valorProcurado, i, posicaoEncontrada;
	bool valorEncontrado;
	
	int esquerda = 0;			//limite da esquerda
	int direita = TAM + 1;		//limite da direita
	int meio;					//o meio onde fica a estrutura
	
	
	//laço de repetição para imprimir o vetor
	for(i = 0; i < TAM; i++){
		printf("%d\n", vetor[i]);
	}
	
	//lendo o valor que deseja ser procurado
	printf("Qual número deseja encontrar?\n");
	scanf("%d", &valorProcurado);
	
	while(esquerda <= direita){
		meio = (esquerda + direita)/2;	//encontra o meio da análise
	
		//valor do meio encontrado
		if(valorProcurado == vetor[meio]){
			posicaoEncontrada = meio;
		}
	
		//ajustando os limites laterais
		if(vetor[meio] < valorProcurado){
			esquerda = meio + 1;
		}
		else{
			direita = meio - 1;
		}
	}
	
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
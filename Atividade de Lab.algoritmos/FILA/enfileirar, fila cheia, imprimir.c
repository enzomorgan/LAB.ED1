#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10


void imprime_vetor(int vetor[TAM], int tamanho){
	int i;
		
	//imprimindo o vetor
	for(i = 0; i < TAM; i++){
		printf("\n%d", vetor[i]);
	}
}

void fila_construtor(int *frente, int *tras){	
	frente = 0;
	tras = -1;
	//valores para indicar que não tem nenhum espaço entre eles
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){
	//processo para enfileirar
	
	if(*tras == TAM - 1){
		printf("\nFila cheia!!");
	}
	else{
		*tras = *tras + 1;
		fila[*tras] = valor;
	}
}

void fila_tamanho(int tras, int frente){
	return(tras - frente) + 1;
	//tamanho da fila
}


int main(){
	
	//declarando variáveis
	int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
	int frente, tras;
	int valor;
	
	fila_construtor(&frente, &tras);
	
	fila_enfileirar(fila, 5, &tras);
	fila_enfileirar(fila, 6, &tras);
	fila_enfileirar(fila, 7, &tras);
	fila_enfileirar(fila, 5, &tras);
	fila_enfileirar(fila, 6, &tras);
	fila_enfileirar(fila, 7, &tras);
	fila_enfileirar(fila, 5, &tras);
	fila_enfileirar(fila, 6, &tras);
	fila_enfileirar(fila, 7, &tras);
	fila_enfileirar(fila, 5, &tras);
	fila_enfileirar(fila, 6, &tras);
	fila_enfileirar(fila, 7, &tras);
	imprime_vetor(fila, fila_tamanho);
	
	return 0;
}
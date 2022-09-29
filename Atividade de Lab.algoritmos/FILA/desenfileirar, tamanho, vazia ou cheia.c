#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
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

bool fila_vazia(int frente, int tras){
	if(frente > tras){
		return true;
	}                   //verificando se a fila está vazia
	else{                      
		return false;
	}
}

bool fila_cheia(int tras){
	if(tras == TAM - 1){
		return true;
	}
	else{
		return false;
	}
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){
	//processo para enfileirar
	
	if(fila_cheia(*tras)){
		printf("\nFila cheia!!");
	}
	else{
		*tras = *tras + 1;
		fila[*tras] = valor;
	}
}

void fila_desenfileirar(int fila[TAM], int *frente, int tras){
	//processo para desenfileirar
	
	if(fila_vazia(*frente, tras)){
		printf("Impossível desenfileirar uma fila vazia!!");
	}
	else{
		printf("O valor: %d", fila[*frente], "foi removido");
		fila[*frente] = 0;
		*frente = *frente + 1;
	}
}	

void fila_tamanho(int tras, int frente){
	return(tras - frente) + 1;
	//tamanho da fila
}


int main(){
	setlocale(LC_ALL, "");
	//declarando variáveis
	int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
	int frente, tras;
	int valor;
	
	fila_construtor(&frente, &tras);
	
	fila_enfileirar(fila, 5, &tras);
	fila_enfileirar(fila, 6, &tras);
	fila_enfileirar(fila, 7, &tras);
	fila_desenfileirar(fila, &frente, tras);
	
	imprime_vetor(fila, fila_tamanho);
	
	return 0;
}
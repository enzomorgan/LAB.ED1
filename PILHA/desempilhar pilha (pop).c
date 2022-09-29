#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10


void vetor(int vetor[TAM], int topo){
	int i;
	
	printf("\n");
	
	//imprimindo o vetor
	for(i = 0; i < TAM; i++){
		printf("%d\n", vetor[i]);
	}
	
	printf("Topo: %d\n", topo);
}

void pilha_push(int pilha[TAM], int valor, int *topo){
	
	//caso não possa mais colocar valores
	if(*topo == TAM - 1){
		printf("Pilha cheia!\n");
	}
	else{
		*topo = *topo + 1;
		pilha[*topo] = valor;
	}
	
}

void pilha_pop(int pilha[TAM], int *topo){
	
	//caso possa tirar os valores
	if(*topo == -1){
		printf("Pilha vazia!\n");
	}
	else{
		printf("Valor removido: %d\n", pilha[*topo]);
		pilha[*topo] = 0;
		*topo = *topo - 1;
	}
}


int main(){
	setlocale(LC_ALL, "");
	
	int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};	//valores da pilha	
	int topo = -1;				//topo da pilha
	
	vetor(pilha, topo);		//chamando a função para imprimir a pilha
	
	pilha_push(pilha, 5, &topo);		//pilha com valor
	pilha_push(pilha, 7, &topo);
	vetor(pilha, topo);
   	
	pilha_pop(pilha, &topo);			//removendo o valor
	vetor(pilha, topo);
	
	pilha_pop(pilha, &topo);
	vetor(pilha, topo);
	
	
	return(0);
}
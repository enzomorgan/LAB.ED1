#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10


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

void vetor(int vetor[TAM]){
	int i;
	
	printf("\n");
	
	//imprimindo o vetor
	for(i = 0; i < TAM; i++){
		printf("%d\n", vetor[i]);
	}
}


int main(){
	setlocale(LC_ALL, "");
	
	int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
	int topo = -1;				//topo da pilha
	
	vetor(pilha);		//chamando a função para imprimir a pilha
	
	pilha_push(pilha, 1, &topo);   //chamando a função para mostrar o valor
	pilha_push(pilha, 2, &topo);   //empilhando mais um número na pilha
	pilha_push(pilha, 3, &topo);
	pilha_push(pilha, 4, &topo);
	pilha_push(pilha, 5, &topo);
	pilha_push(pilha, 6, &topo);
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 8, &topo);
	pilha_push(pilha, 9, &topo);
	pilha_push(pilha, 10, &topo);
	
	vetor(pilha);				
	
	return(0);
}
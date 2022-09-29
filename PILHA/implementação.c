#include <stdio.h>
#include <stdlib.h>

struct prato{  //estrutura para a pilha
	char cor;
	struct prato *prox;   	//ponteiro
};

typedef struct prato Prato; //renomeando

Prato *pilha;  //ponteiro

void push(char cor){  //função para adicionar
	Prato *p = (Prato*) malloc(sizeof(Prato));  //alocando na memória
	p->cor = cor;  //aponta para a cor do prato
	p->prox = pilha;  //novo elemento aponta para o primeiro elemento
	pilha = p; //novo primeiro elemento
}

void pop(){  //função para remover 
	if(pilha == NULL){  //se a variável for igual a nulo
		printf("Pilha vazia!!\n");
	}
	else{
		pilha = pilha->prox; //removendo o elemento que está no topo
	}
}


void imprime(Prato *p){   //função para imprimir os elementos
	if(p!=NULL){  //se a variável for diferente de nulo
		printf("Cor do prato: %c\n", p->cor); //imprimindo
		imprime(p->prox);  //verificando o próximo elemento
	}
}

int main(){
	
	//chamando a função e adicionando as cores
	push('b');
	push('v');
	push('g');
	push('y');
	
	pop();  //chamando a função para remover
	
	Prato *pilhaAux = pilha; //ponteiro auxiliar
	imprime(pilhaAux);  //chamando a função para imprimir as cores adicionadas
	   	
	return 0;
}
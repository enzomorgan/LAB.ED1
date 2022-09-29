#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ponto{
	float x;
	float y;
	struct ponto *prox;  //ponteiro que aponta para o próximo   	
};

typedef struct ponto Ponto;  //renomeando

Ponto *listaPontos;  //ponteiro que aponta para o primeiro elemento da lista	 

void add(float x, float y){  //função para adicionar novos elementos
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));  //alocando na memória
	
	p->x = x;  //apontando para o primeiro valor
	p->y = y;  //apontando para o segundo valor
	p->prox = listaPontos; //apontando para nulo
	listaPontos = p;  //apontando para os próximos valores adicionados 
}

int main(){
	setlocale(LC_ALL, "");
	
	add(1,5);
	add(2,7);
	add(5,3);
	
	printf("%.0f\n", listaPontos->prox->x);
	
	system("pause\n");
	return 0;
}
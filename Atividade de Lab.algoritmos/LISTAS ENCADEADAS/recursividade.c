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

void imprime(Ponto *p){  //função para imprimir os valores
	if(p!=NULL){  //se "p" for diferente de nulo
		printf("Ponto(%.0f,%.0f)\n", p->x, p->y); //imprimindo
		imprime(p->prox);  //chamando a função para exibir o próximo
	}
}

int main(){
	setlocale(LC_ALL, "");
	
	//chamando a função para adicionar valores
	add(1,5);
	add(2,7);
	add(5,3);
	
	Ponto *auxLista = listaPontos; //ponteiro auxiliar
	
	imprime(auxLista);  //chamando a função para exibir os valores dos pontos
	
	system("pause\n");
	return 0;
}
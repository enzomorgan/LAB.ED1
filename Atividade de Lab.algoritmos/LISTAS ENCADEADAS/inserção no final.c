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

void addFirst(float x, float y){  //função para adicionar novos elementos no início
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));  //alocando na memória
	
	p->x = x;  //apontando para o primeiro valor
	p->y = y;  //apontando para o segundo valor
	p->prox = listaPontos; //apontando para nulo
	listaPontos = p;  //apontando para os próximos valores adicionados 
}

void addLast(float x, float y){ //função para adicionar novos elementos no fim
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));  //alocando na memória
	
	p->x = x;  //apontando para o primeiro valor
	p->y = y;  //apontando para o segundo valor
	p->prox = NULL; //apontando para nulo
	if(listaPontos==NULL){  //se o início da lista for nulo
		listaPontos = p;  //último também é o primeiro
	}
	else{  //se ele não for nulo
		Ponto *listaAux = listaPontos;  //ponteiro auxiliar 
		while(listaAux->prox!=NULL){  //enquanto o ponteiro auxilar que aponta para o próximo for nulo 
			listaAux = listaAux->prox;  //indo para o próximo elemento
		}
		listaAux->prox = p; //apontando para o novo último elemento
	}
}

void imprime(Ponto *p){  //função para imprimir os valores
	if(p!=NULL){  //se "p" for diferente de nulo
		printf("Ponto(%.1f,%.1f)\n", p->x, p->y); //imprimindo
		imprime(p->prox);  //chamando a função para exibir o próximo
	}
}

int main(){
	setlocale(LC_ALL, "");
	
	//chamando a função para adicionar valores
	addFirst(1,5);
	addFirst(2,7);
	addFirst(5,3);
	addLast(1,1);
	addLast(8,8);
	
	Ponto *auxLista = listaPontos; //ponteiro auxiliar
	
	imprime(auxLista);  //chamando a função para exibir os valores dos pontos
	
	system("pause\n");
	return 0;
}
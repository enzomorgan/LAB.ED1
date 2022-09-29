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

void imprime(Ponto *p){  //função para imprimir os valores
	if(p!=NULL){  //se "p" for diferente de nulo
		printf("Ponto(%.1f,%.1f)\n", p->x, p->y); //imprimindo
		imprime(p->prox);  //chamando a função para exibir o próximo
	}
}

int length = 0; //variável que é o tamanho da lista com iníco em zero

void addIndex(float x, float y, int index){  //função para adicionar valores em determinados indíces
	Ponto *p = (Ponto*) malloc(sizeof(Ponto)); //alocando na memória
	
	p->x = x; //apontando para o primeiro valor
	p->y = y; //apontando para o segundo valor
	   	
	if(index > length){  //se for maior que o tamanho da lista 
		printf("Posição inválida!!\n");
	}
	else{
		if(index == 0){  //se a variável for igual a zero
			p->prox = listaPontos; //primeiro elemento
			listaPontos = p; //novo primeiro elemento
		}
		else{
			Ponto *listaAux = listaPontos; //ponteiro apontando para o primeiro elemento
			int i=0; //auxiliar contador
			
			while(i!=index-1){  //enquanto o contador for diferente da variável menos um
				listaAux = listaAux->prox; //pulando os elementos
				i++; //incrementação
			}
			p->prox = listaAux->prox; //apontando
			listaAux->prox = p; //apontando para um novo local
		}
		length++; //incrementação
	}
}

int main(){
	setlocale(LC_ALL, "");
	
	//adicionando valores e chamando a função
	addIndex(1,1,0);
	addIndex(2,4,1);
	
	Ponto *auxLista = listaPontos; //ponteiro auxiliar
	
	imprime(auxLista);  //chamando a função para exibir os valores dos pontos
	
	system("pause\n");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct pessoa{ //estrutura para a fila
	int senha;
	struct pessoa *prox;  //ponteiro
};

typedef struct pessoa Pessoa;  //renomeando

Pessoa *fila; //ponteiro apontando para o início

void add(int senha){  //função para adicionar
	Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa));  //alocando na memória
	p->senha = senha; //pessoa na fila
	p->prox = NULL; //iniciando como nulo
	
	if(fila == NULL){  //se a fila for igual a nulo
		fila = p;  //apontando para a pessoa 
	}
	else{
		Pessoa *filaAux = fila; //ponteiro auxiliar
		
		while(filaAux->prox!=NULL){  //enquanto o ponteiro auxiliar for diferente de nulo 
			filaAux = filaAux->prox; //apontando para o próximo
		}
		filaAux->prox = p; //novo elemento
	}
}

void removeFila(){ //função para remover os elementos
	if(fila == NULL){  //se a fila for igual a nulo
		printf("Fila vazia!!!\n");  //imprimindo
	}
	else{
		fila = fila->prox;  //indo para o próximo elemento
	}
}

void imprime(Pessoa *f){  //função para imprimir os elementos
	if(f!=NULL){  //se a variável for diferente de nulo
		printf("Senha da pessoa: %d\n", f->senha);  //imprimindo
		imprime(f->prox);  //verificando o próximo elemento  
	}
}

int main(){
	
	//chamando a função e adicionando os valores   	 
	add(5);
	add(8);
	add(10);
	add(25);
	
	Pessoa *filaAux = fila;  //auxiliar
	
	imprime(filaAux);  //imprimindo os valores em ordem
	
	printf("\n");
	
	removeFila();  //removendo
	filaAux = fila;	
	imprime(filaAux);  //imprimindo fila atualizada
	
	printf("\n");
	
	removeFila();  //removendo
	filaAux = fila;
	imprime(filaAux);  //lista atualizada
	
	printf("\n");
	return 0;
}
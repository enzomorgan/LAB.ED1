#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 10


void imprime_pilha(int vetor[TAM], int *topo){
	int i;
	
	printf("\n");
	
	//imprimindo o vetor
	for(i = 0; i < TAM; i++){
		printf("\n%d", vetor[i]);
	}
	
	printf("\nTopo: %d", topo);
}

//caso a pilha esteja vazia
bool pilha_vazia(int topo){
	if(topo == -1){
		return true; //se a pilha estiver vazia, o retorno é verdadeiro
	}
	else{
		return false;
	}
}

//caso a pilha esteja cheia
bool pilha_cheia(int topo){
	if(topo == TAM - 1){
		return true; //se a pilha estiver cheia, o retorno é verdadeiro
	}
	else{
		return false;
	}
}

//tamanho da pilha
int tamanho_pilha(int topo){
	return topo + 1;
}

//verificando o último valor da pilha
int pilha_Uvalor(int pilha[TAM], int *topo){
	if(pilha_vazia(*topo)){
		printf("\nA pilha está vazia!!");
		return 0;
	}
	else{
		return pilha[*topo];
	}
}

//adiciona um valor a pilha
void pilha_push(int pilha[TAM], int valor, int *topo){
	
	//caso não possa mais colocar valores
	if(pilha_cheia(*topo)){
		printf("\nPilha cheia!");
	}
	else{
		*topo = *topo + 1;
		pilha[*topo] = valor;
	}
	
}

//remove um valor da pilha
void pilha_pop(int pilha[TAM], int *topo){
	
	//caso possa tirar os valores
	if(pilha_vazia(*topo)){
		printf("Pilha vazia!\n");
	}
	else{
		printf("\nValor removido: %d", pilha[*topo]);
		pilha[*topo] = 0;
		*topo = *topo - 1;
	}
}

//cria uma pilha e limpa ela 
void pilha_construtor(int pilha[TAM], int *topo){
	
	*topo = -1;// coloca o topo negativo para indicar a pilha vazia
	
	int cont; //auxiliar contador
	
	//imprimindo o vetor
	for(cont = 0; cont < TAM; cont++){
		pilha[cont] = 0;
	}
}


int main(){
	setlocale(LC_ALL, "");
	
	int pilha[TAM];    //declarando variáveis
	int topo, valorRetirado;
	
	pilha_construtor(pilha, &topo);
	
	imprime_pilha(pilha, topo);
	
	printf("\nÚltimo elemento: %d", pilha_Uvalor(pilha, &topo));
	printf("\nTamanho da pilha: %d", tamanho_pilha(topo));

	pilha_push(pilha, 1, &topo);
	imprime_pilha(pilha, topo);
	
	pilha_push(pilha, 2, &topo);
	pilha_push(pilha, 3, &topo);
	pilha_push(pilha, 4, &topo);
	pilha_push(pilha, 5, &topo);
	pilha_push(pilha, 6, &topo);
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 8, &topo);
	pilha_push(pilha, 9, &topo);
	
	pilha_pop(pilha, &topo);
	imprime_pilha(pilha, topo);
}





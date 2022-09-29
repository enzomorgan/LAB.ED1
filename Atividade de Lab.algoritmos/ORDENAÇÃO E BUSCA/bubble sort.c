#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void imprime_vetor(int vetor[TAM]){
	int cont;
								//função para imprimir o vetor
	printf("\n");
	
	for(cont = 0; cont < TAM; cont++){
		printf("|%d|", vetor[cont]);
	}
}

void bubble_sort(int vetor[TAM]){
	int x, y, aux; 			//função para trocar valores e colocar no lugar certo
	
	for(x = 0; x < TAM; x++){  //valor da esquerda sendo analisado 
		for(y = x + 1; y < TAM; y++){   //valor da direita sendo analisado
			imprime_vetor(vetor); //chamando a função para imprimir o vetor
			if(vetor[x] > vetor[y]){  //confere se precisa fazer a troca
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	
		imprime_vetor(vetor);	
	}
	
}

int main(){
	setlocale(LC_ALL, "");
	
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    //declaração de variáveis
	
	bubble_sort(vetor); //função dos elementos
	
	imprime_vetor(vetor); //chamando a função para imprimir o vetor
	
	return 0;
}
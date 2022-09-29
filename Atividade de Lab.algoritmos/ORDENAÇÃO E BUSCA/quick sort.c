#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void imprime_vetor(int vetor[TAM]){
	int cont;
	
	printf("\n");
	
	for(cont = 0; cont < TAM; cont++){
		printf("|%d|", vetor[cont]);
	}
}									
							//função para organizar uma lista que não 
							//saiba se ela tá organizada ou não
void quick_sort(int vetor[TAM], int inicio, int fim){  									
	  int aux, pivo, esq, dir, meio;
	  
	  //limites da esquerda e direita da região analisada  
	  esq = inicio;
	  dir = fim; 
	   
	  //ajustando auxiliares do centro 
	  meio = (int) (esq + dir) / 2;
	  pivo = vetor[meio]; 
	  
	  
	  
	while(dir > esq){
		  
	  while(vetor[esq] < pivo){
		  esq = esq + 1;
	  } 
	  
	  while(vetor[dir] > pivo){
		  dir = dir - 1;
	  }
	  
	  
	  if(esq <= dir){
		  //realizando uma troca de valores
		  aux = vetor[esq];
		  vetor[esq] = vetor[dir];
		  vetor[dir] = aux;
		  
		  //faz os limites laterais alinharem para o centro
		  esq = esq + 1;
		  dir = dir - 1; 
	  }
		
		imprime_vetor(vetor);
	}
	
	//recursão para continuar ordenando
	if(inicio < dir){
		quick_sort(vetor, inicio, dir);
	}
	
	if(esq < fim){
		quick_sort(vetor, esq, fim);
	}    
	   	
}

int main(){
	setlocale(LC_ALL, "");
	
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
	
	quick_sort(vetor, 0, TAM);
	
	imprime_vetor(vetor);
	
	return 0;
}
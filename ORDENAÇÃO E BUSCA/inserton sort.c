#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void imprime_vetor(int vetor[TAM]){
	int cont;
	
	printf("\n");
							//função para imprimir o vetor					
	for(cont = 0; cont < TAM; cont++){
		printf("|%d|", vetor[cont]);
	}
}

void inserton_sort(int vetor[TAM]){
	int i, j, atual;
                   	   	   	   	   //função para posicionar os elementos 	
	for(i = 1; i < TAM; i++){
		atual = vetor[i];    //elemento atual em análise
		j = i - 1;      //elemento anterior ao analisado
		
		while((j >= 0) && (atual < vetor[j])){  //analisando membros anteriores
			vetor[j + 1] = vetor[j];   //posiciona os elementos uma posição para frente
			j = j - 1;  //faz o "j" andar para trás
		}
		
			
	//agora que o espaço foi aberto, colocamos o atual (menor número) na posição correta
		vetor[j + 1] = atual;
	
		imprime_vetor(vetor);  //mostra a lista atualizada      
	}

}

int main(){
	setlocale(LC_ALL, "");
	
	//declaração de variáveis
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
	
	inserton_sort(vetor);  //chamando a função dos elementos
	
	imprime_vetor(vetor);  //chamando a função para imprimir o vetor
	
	return 0;
}
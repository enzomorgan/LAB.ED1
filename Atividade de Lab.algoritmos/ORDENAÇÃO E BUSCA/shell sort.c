#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void imprime_vetor(int vetor[TAM]){
	int cont;
									//função para imprimir o vetor
	printf("\n");
	
	for(cont = 0; cont < TAM; cont++){
		printf("|%d|", vetor[cont]);
	}
}

void shell_sort(int vetor[TAM]){	//ordena valores longe um dos outros	
	int i, j, valor;
	int h = 1;
	
	//de quantos em quantos será o pulo entre análises
	while(h < TAM){
		h = 3 * h + 1;
	} 	
	
	while(h > 1){
		//reduz a distância entre as análises
		h = h / 3;
	}
	
		for(i = h; i < TAM; i++){
			valor = vetor[i];    //elemento atual em análise
			j = i - h;      //elemento anterior ao analisado
		
 			while((j >= 0) && (valor < vetor[j])){  //analisando membros anteriores
				vetor[j + h] = vetor[j];   //posiciona os elementos uma posição para frente
				j = j - h;  //faz o "j" andar para trás
		}
			
		//agora que o espaço foi aberto, colocamos o atual (menor número) na posição correta
			vetor[j + h] = valor;
		
			imprime_vetor(vetor); //lista atualizada
		 }		

}

int main(){
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
	
	shell_sort(vetor);
	
	imprime_vetor(vetor);
	
	return 0;
}
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

//junta os dois subarrays criados ao dividir o vetor principal
void merge(int vetor[TAM], int indiceEsquerdo, int meio, int indiceDireito){
	
	int i, j, k;  //contadores auxiliares
	int n1 = meio - indiceEsquerdo + 1;  //tamanho do primeiro vetor auxiliar 
 	int n2 = indiceDireito - meio;  //tamanho do segundo vetor auxiliar
	
	//cria dois arrays temporais
	int vetorEsquerdo[n1], vetorDireito[n2];
	
	//passa os elementos do vetor principal para o primeiro vetor auxiliar(esquerda) 
	for(i = 0; i < n1; i++){
		vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
	}
	
	//passa os elementos do vetor principal para o segundo vetor auxiliar(direita) 
	for(j = 0; j < n2; j++){
		vetorDireito[j] = vetor[meio + 1 + j];
	}
	
	//reseta as variáveis
	i = 0;
	j = 0;
	k = indiceEsquerdo;
	
	while(i < n1 && j < n2){
		//caso o valor na esquerda seja menor 
		if(vetorEsquerdo[i] <= vetorDireito[j]){
			vetor[k] = vetorEsquerdo[i]; //passo para o vetor principal o valor menor
			i++; //incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar 
		}   	
		else{
			vetor[k] =  vetorDireito[j];
			j++;
		}
		k++; //aumenta o indíce de posicionamento no vetor	
	}
	
	//se faltarem alguns dos elementos do array esquerdo, passa eles pro array principal
	while(i < n1){
		vetor[k] = vetorEsquerdo[i];
		i++;
		k++;
	}
	//se faltarem alguns dos elementos do array direito, passa eles pro array principal
	while(j < n2){
		vetor[k] = vetorDireito[j];
		j++;
		k++;
	}
}

//função que divide em pequenos grupos para depois juntar tudo em ordem
 void merge_sort(int vetor[TAM], int indiceEsquerdo, int indiceDireito){	
	 
	 if(indiceEsquerdo < indiceDireito){
		int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;	//encontra o meio
		
		merge_sort(vetor, indiceEsquerdo, meio); //metade para trás
		
		merge_sort(vetor, meio + 1, indiceDireito); //metade para frente
		
		//visualizando o processo
		imprime_vetor(vetor);
		
		//une os dois subarrays que foram criados
		merge(vetor, indiceEsquerdo, meio, indiceDireito); 
	 }
 }
 
 int main(){
	 setlocale(LC_ALL, "");
	 
	 int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
	 
	 imprime_vetor(vetor);
	 
	 merge_sort(vetor, 0, TAM - 1);  //função dos elementos
	 
	 imprime_vetor(vetor);
	 
	 return 0;
 }
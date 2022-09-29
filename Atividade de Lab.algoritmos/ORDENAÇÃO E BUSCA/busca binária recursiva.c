#include <stdio.h>

struct estudante{  //estrutura dos estudantes
	int mat;
	char nome[50];
	float nota1;
	float nota2;
	float nota3;  	
};

void ler(struct estudante *pe){  //função para ler os dados
	scanf("%d %s %f %f %f", &pe->mat, pe->nome, &pe->nota1, &pe->nota2, &pe->nota3); //lendo os dados
}

void menu(){  //função para o menu de opções
	printf("====== digite uma opcao: ======\n");
	printf("1 - pesquisar\n");
	printf("2 - sair\n");
	printf("===============================\n");
}

int buscabinaria(int mat, struct estudante v[], int inicio, int fim){  //função para buscar sobre o estudante
	if(inicio >= fim) return -1;  //se não existir o estudante pesquisado
	int meio = (inicio + fim)/2;  //calculando o meio

	if(v[meio].mat == mat){  //se a matrícular for a que estiver buscando
		return meio;  //retorna como o indíce do estudante
	}
	if(v[meio].mat < mat){  //se for menor que a matrícula procurada
		return buscabinaria(mat, v, meio + 1, fim);  //pesquisando na parte superior
	}
	return buscabinaria(mat, v, meio - 1, fim);  //pesquisando na parte inferior	 	 	  	
}

int main(){
	
	int n;  //variável
	
	printf("Informe a quantidade de estudantes: \n");
	scanf("%d", &n);  //lendo a quantidade de estudantes
	
	struct estudante v[n]; //vetor para estudantes
	int i;  //auxiliar	 
	
	for(i = 0; i < n; i++){  //percorrendo o vetor
		ler(&v[i]);  //lendo os dados 
	}
	
	int op; //variável
	menu(); //chamando a função menu
	scanf("%d", &op);  //lendo a opção digitada no menu
	
	while(op != 2){  //esquanto a opção for diferente de 2(sair) será analisado
		if(op == 1){ //se for igual a 1(pesquisar) irá pesquisar a matrícula
			int mat;  //variável
			printf("Informe a matricula: \n");
			scanf("%d", &mat);  //lendo a matrícula digitada
			int idx = buscabinaria(mat, v, 0, n - 1);  //buscando o estudante
			if(idx != -1){  //se for diferente de -1, o estudante foi encontrado
				v[idx].nota3 = v[idx].nota3 + 1; //dando 1 ponto na terceira nota do estudante
				float media = (v[idx].nota1*2 + v[idx].nota2*3 + v[idx].nota3*4)/9; //calculando a média
				printf("%s: %.2f\n", v[idx].nome, media);  //imprimindo dos dados
			}
		}
		menu();//chamando a função do menu 
		scanf("%d", &op);  //lendo a opção
	}
	 
	printf("Fim do programa!!\n");
	
	return(0);
}
#include <stdio.h>

struct estudante{  //estrutura para os estudantes
	int mat;
	char nome[50];
	float nota1;
	float nota2;
	float nota3;
};

//recebendo um ponteiro para estudante
void ler(struct estudante *pe){  //função para imprimir os estudantes 
	scanf("%d %s %f %f %f", &pe->mat, pe->nome, &pe->nota1, &pe->nota2, &pe->nota3); //lendo os dados
}

void menu(){  //função para imprimir o menu
	printf("====== digite a opcao: ======\n");
	printf("1 - pesquisar\n");
	printf("2 - sair\n");
	printf("=============================\n");
}

int pesquisa(int mat, int n, struct estudante v[]){  //função para pesquisar
	int i;  //auxiliar
	for(i = 0; i < n; i++){  //percorrendo o vetor
		if(v[i].mat == mat){  //verificando a matrícula
			return i;  //retornando o indíce do estudante
		}
	}
	return -1;  //se não encontrar a matrícula, retorna -1
}

int main(){
	
	int n;  //variável
	
	printf("Informe o valor de n: \n");
	scanf("%d", &n);  //lendo o valor de n
	
	struct estudante v[n]; //vetor de estudantes
	int i; //auxiliar
	for(i = 0; i < n; i++){ //percorrendo o vetor
		ler(&v[i]);  //chamando a função ler
	}
	
	int op;  //variável
	menu();  //chamando a função do menu
	scanf("%d", &op);  //lendo a opção digitada no menu
	
	while(op != 2){  //enquanto a opção for diferente de 2(sair) será analisado
		if(op == 1){  //se opção for igual a 1(pesquisar) 
			int mat;  //variável para a matrícula
			printf("informe a matricula: \n");
			scanf("%d", &mat);  //lendo a matrícula digitada 
			int idx = pesquisa(mat, n, v);  //variável que vai ser quem retorna na função pesquisa
			if(idx != -1){  //se for diferente de -1, será feito o cálculo da média
				float media = (v[idx].nota1*2 + v[idx].nota2*3 + v[idx].nota3*4)/9;  //calculando média
				printf("%s: %.2f\n", v[idx].nome, media);  //imprimindo os dados
			}
		}
		menu();  //função do menu
		scanf("%d", &op);  //lendo a opção digitada
	}
	
	printf("Fim do programa!!\n");
	
	return(0);
}
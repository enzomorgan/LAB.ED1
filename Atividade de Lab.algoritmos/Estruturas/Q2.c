#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{ //estrutura para o aluno
	int matricula;
	char nome[80];
	char turma;
	float notas[3];
	float media;
} Aluno; //renomeando

void matricula(int n, Aluno* alunos){ //função para adicionar os dados
	int i;  //variável
	
	printf("Informe a quantidade de alunos que deseja matricular: \n");
	scanf("%d", &n);  //lendo a quantidade de alunos
	
	alunos = (Aluno*)malloc(n*sizeof(Aluno));  //alocando dinamicamente
	
	if(alunos == NULL){  //se for igual a nulo
		printf("memoria insuficiente!\n");  //imprimindo a mensagem
		exit(1);  //encerrando o programa
	}
	
	for(i = 0; i < n; i++){  //percorrendo o vetor
		if(n > 10){  //se for mais que 10 alunos
			printf("Nao temos mais vagas!\n");  //imprimindo a mensagem
			system("pause\n");  //pausando o programa para visualizar o erro
			exit(1); //encerrando o programa
		}
		printf("Matricula do aluno: \n");
		scanf("%d", &alunos->matricula[i]);  //lendo o número da matricula
		printf("Nome: \n");
		scanf("%s", alunos->nome[i]);  //lendo o nome do aluno
		printf("Turma: \n");
		scanf("%s", alunos->turma[i]);  //lendo a turma
	}
	
	free(alunos);  //liberando a memória
}

void lanca_notas(int n, Aluno* alunos){  //função para lançar as notas
	int i;  //variável
	
	for(i = 0; i < n, i++){ //percorrendo o vetor
		printf("Digite as notas: \n"); 
		scanf("%f", &alunos->notas[i]); //lendo as notas
		alunos->media = (alunos->media + alunos->notas[i])/3  //calculando 
	}
	printf("Media: %.1f\n", alunos); //imprimindo a média
}

void imprime_tudo(int n, Aluno* alunos){  //função para imprimir os dados
	int i; //variável
	
	for(i = 0; i < n; i++){ //percorrendo o vetor
		printf("Matricula: %d\n", alunos->matricula); //imprimindo a matricula
		printf("Nome: %s\n", alunos->nome); //imprimindo o nome
	}
}

void imprime_turma(int n, Aluno* alunos, char turma){  //função para imprimir turma
	int i; //variável
	
	for(i = 0; i < n; i++){ //percorrendo o vetor
		printf("Matricula: %d\n", alunos->matricula); //imprimindo a matricula
		printf("Nome: %s\n", alunos->nome); //imprimindo o nome
		printf("Turma: %s\n", alunos->turma); //imprimindo a turma
	}
}

void imprime_turma_aprovados(int n, Aluno* alunos, char turma){ //função para imprimir os aprovados
	int i; //variável
	
	for(i = 0; i < n; i++){ //percorrendo o vetor
		printf("Turma: %s\n", alunos->turma);  //lendo a turma
		
		if(alunos->media >= 7){  //se média for maior ou igual a 7
			printf("Aluno aprovado!\n"); //imprimindo a mensagem 
			printf("Turma: %s\n", alunos->turma);  //imprimindo a turma
		}
		else{ //se a média não for maior ou igual a 7
			printf("Aluno reprovado!\n"); //imprimindo a mensagem
			printf("Turma: %s\n", alunos->turma); //imprimindo a turma
		}
	}
}
int main(){
	//declaração de variáveis
	Aluno* a;
	int n;
	char t;
	
	matricula(n, &a);  //chamando a função para adicionar os dados
	printf("\n");
	lanca_notas(n, &a); //chamando a função para adicionar as notas e a média
	printf("\n");
	imprime_tudo(n, &a); //chamando a função para imprimir a matricula e nome
	printf("\n"); 
	imprime_turma(n, &a, t); //chamando a função para imprimir os dados da turma
	printf("\n");
	imprime_turma_aprovados(n, &a, t);  //chamando a função para imprimir os aprovados
	
	return 0;
}
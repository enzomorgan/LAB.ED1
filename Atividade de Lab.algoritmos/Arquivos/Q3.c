#include <stdio.h>
#include <stdlib.h>

struct alunos{
	char nome[100];
	float nota1;
	float nota2;
	float nota3;
};

typedef struct alunos Alunos;  //renomeando

int main(){
	
	Alunos* a;
	int n;
	int i;
	
	a = (Alunos*)malloc(n*sizeof(Alunos));  //alocando dinamicamente na memória
	
	if(a == NULL){
		printf("Memoria insuficiente!\n");
		system("pause\n");
		exit(1);
	}
	
	FILE* arquivo = fopen("alunos.txt", "a");  //abrindo arquivo para anexar
	
	if(arquivo == NULL){
		printf("Erro ao criar o arquivo!\n");
		system("pause\n");
		exit(1);
	}
	
	printf("Informe o numero de alunos: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Nome: ");
        scanf(" %s", a[i].nome);
        printf("Nota 1 do aluno: ");
        scanf("%f", &a[i].nota1);
        printf("Nota 2 do aluno: ");
        scanf("%f", &a[i].nota2);
        printf("Nota 3 do aluno: ");
        scanf("%f", &a[i].nota3);
    }
    
    for(i = 0; i < n; i++){
		 fprintf(arquivo, "%s\t%.1f\t%.1f\t%.1f\n", a[i].nome, a[i].nota1, a[i].nota2, a[i].nota3);   //salvando no arquivo
	}
	
	free(a);  //liberando a memória
	fclose(arquivo);  //fechando o arquivo
	
	return 0;
}
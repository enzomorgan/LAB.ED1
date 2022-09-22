#include <stdio.h>
#include <stdlib.h>

struct funcionario{
	int id;
	char nome[100];
	float salario;
};

typedef struct funcionario Funcionario;  //renomeando

int main(){
	
	Funcionario* f;
	int i;
	int n;
	
	f = (Funcionario*)malloc(sizeof(Funcionario));  //alocando dinamicamente na memória
	
	if(f == NULL){
		printf("Memoria insuficiente!\n");
		system("pause\n");  //pausando para ver o erro
		exit(1);
	}
	
	FILE* arquivo = fopen("arquivo_fun.txt", "w");  //criando arquivo para leitura
	
	if(arquivo == NULL){
		printf("Erro ao criar o arquivo!\n");
		system("pause\n");
		exit(1);  //encerrando o programa
	}
	
	printf("Informe quantos funcionarios deseja ler: \n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("ID: ");
		scanf("%d", &f->id);
		printf("Nome: ");
		scanf(" %s", f->nome);
		printf("Salario: ");
		scanf("%f", &f->salario);
	}
	
	for(i = 0; i < n; i++){
		fprintf(arquivo, "ID: %d\t Nome: %s\t Salario: %.1f\n", f->id, f->nome, f->salario);  //salvando no arquivo
	}
	
	free(f);  //liberando a memória alocada
	fclose(arquivo);  //fechando o arquivo
	
	return 0;
}
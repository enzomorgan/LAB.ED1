#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int sexo, idade, total, total_pessoas;
	float altura, media, media_alturaF, media_idadeM, contMAM, contMIH, media_grupo;
	
	for(i = 0; i < 10; i++){
		printf("Sexo da pessoa(0 - Feminino 1 - Masculino: \n");
		scanf("%i", &sexo);
		printf("Digite a idade: \n");
		scanf("%i", &idade);
		printf("Digite a altura: \n");
		scanf("%f", &idade);
		
		if(idade >= 0 && idade <= 100){
			media = media/10;
			media_grupo++;
		}
		
		if(sexo == 0){
			media_alturaF = media_alturaF + altura;
			contMAM++;
		}
		else if(sexo == 1){
			media_idadeM = media_idadeM + idade;
			contMIH++;
		}
		
		if(idade >= 18 && idade <= 35){
			total = total/10;
			total_pessoas++;
		}
	}
	
	
	printf("Média da idade do grupo: %.2f\n", media/media_grupo);
	printf("Média da altura das mulheres: %.2f\n", media_alturaF/contMAM);
	printf("Média da idade dos Homens: %.2f\n", media_idadeM/contMAM);
	printf("Total de pessoas com idade entre 18 e 35 anos: %i\n", total/total_pessoas);
	
	system("pause\n\n");
	return(0);
}
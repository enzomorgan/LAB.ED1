#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	float porcentagemFeminina;
	char sexo[5], cor_olhos[5], cor_cabelos[5];
	int i, idade, maior_idade, contPorcentagem;
	
	for(i = 0; i < 10; i++){
		printf("Sexo: ");
		scanf("%s", &sexo);
		printf("A(Azuis) V(Verdes) C(Castanho)\n");
		printf("Cor dos olhos: ");
		scanf("%s", &cor_olhos);
		printf("L(Louros) C(Castanhos) P(Pretos)\n");
		printf("Cor dos cabelos: ");
		scanf("%s", &cor_cabelos);
		printf("Idade: ");
		scanf("%i", &idade);
		
		 if((strcmp(sexo,"F") == 0) && ((idade >= 18) && (idade <= 35)) && (strcmp(cor_olhos,"V") == 0) && (strcmp(corCabelos,"L") == 0)){
            contPorcentagem++;
        }
        if(idade > maior_idade) {
            maior_idade = idade;
        }
	}    	
	
	
		printf("Maior idade: %d\n", maior_idade);
    	porcentagemFeminina = (100 * contPorcentagem)/10;
    	printf("Porcentagem feminina com olhos verdes, cabelos louros que estão entre 18 e 35 anos: %.2f\n", porcentagemFeminina);
	
		
	system("pause\n\n");
	return(0);	
}
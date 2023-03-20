#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	float preco, preco_final;
	char destino[3];

	printf("Informe o valor do produto em R$: ");
	scanf("%f", &preco);
	printf("Informe o estado para destino (MG, SP, RJ ou MS): ");
	scanf("%s", &destino);

	if(strcmp(destino, "sp") == 0 || strcmp(destino, "SP") == 0){
    	preco_final = preco + (preco*0.12);
    	printf("Valor total para o Estado de SP R$ %.2f\n", preco_final);
	}	
	else if(strcmp(destino, "mg") == 0 || strcmp(destino, "MG") == 0){
		preco_final = preco + (preco*0.07);
    	printf("Valor total para o Estado de MG R$ %.2f\n", preco_final);
    }
    else if(strcmp(destino, "rj") == 0 || strcmp(destino, "RJ") == 0){
    	preco_final = preco + (preco*0.15);
    	printf("Valor total para o Estado do RJ R$ %.2f\n", preco_final);
    }
	else if(strcmp(destino, "ms") == 0 || strcmp(destino, "MS") == 0 ){
		preco_final = preco + (preco*0.08);
		printf("Valor total para o Estado de MS R$ %.2f\n", preco_final);
    }	
	else{
    	printf("Opção inválida!\n");
	}
	
	system("pause");
	return 0;

}
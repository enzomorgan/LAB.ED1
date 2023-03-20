#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int CEP, idade, quantidade, CEP_cafe, itens, mais_trinta, menos_trita;
	
	CEP_cafe = 59905000;
	do{
		printf("Insira um CEP para o destino do seu pedido: \n");
		scanf("%i", &CEP);
		printf("Idade do cliente: ");
		scanf("%i", &idade);
		printf("Quantidade de pedidos: ");
		scanf("%i", &quantidade);
		
		if(idade < 10 && idade > 110){
			printf("ALERTA!!!\n\n\a\a\a");
			printf("Digite os dados novamente\n\n");
		printf("Insira um CEP para o destino do seu pedido: \n");
		scanf("%i", &CEP);
		printf("Idade do cliente: ");
		scanf("%i", &idade);
		printf("Quantidade de pedidos: ");
		scanf("%i", &quantidade);
		}
		if(quantidade < 1 && quantidade > 12){
			printf("Alerta na quantidade de pedidos!!\n\n");
		}
		
		if(CEP == 59905000){
			itens = CEP_cafe;
			itens++;
		}
		
		if(idade > 30){
		 	mais_trinta = idade;
		 	mais_trinta++;
		}
		else if(idade < 30){
			menos_trita = idade;
			menos_trita++;
		}
		
		
	}while(CEP != 0)
	
	printf("Quantidade de itens pedidos pelo CEP da área da cafeteria: %i\n", CEP_cafe);
	printf("Quantidade de itens pedidos: %i\n", quantidade);
	printf("Pedidos por pessoas com mais de 30 anos: %d\n", mais_trinta/idade);
	printf("Pedidos por pessoas com mais de 30 anos: %d\n", menos_trita/idade);
	
	
	system("pause\n\n");
	return(0);
}
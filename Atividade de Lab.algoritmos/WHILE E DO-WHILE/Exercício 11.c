#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int codigo, codigo_cliente, prestacoes, opcao, parcelas;
	float compra_total, juros, vt;
	
	printf("Digite o código do cliente: ");
	scanf("%i", &codigo);
	
	codigo_cliente = 151413;
	if(codigo == codigo_cliente){
		do{	
			printf("Bem Vindo ao Sistema das Lojas Brilho\n\n");
			printf("Em que podemos lhe ajudar?\n\n");
			printf("Opção 1 - Valor das compras e número das parcelas\n");
			printf("Opção 2 - Sair\n");
			printf("Digite uma opção: ");
			scanf("%i", &opcao);
			
			if(opcao == 1){
				printf("Digite o valor total das compras: \n");
				scanf("%f", &compra_total);
				printf("Número de parcelas que deseja: \n");
				scanf("%i", &parcelas);
					
			switch(parcelas)
			{
			case 1:
				printf("Parcelado em 1x\n");
				printf("Valor da sua compra: %.2f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 2:
				printf("Parcelado em 2x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 3:
				printf("Parcelado em 3x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 4:
				printf("Parcelado em 4x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 5:
				printf("Parcelado em 5x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 6:
				printf("Parcelado em 6x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 7:
				printf("Parcelado em 7x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 8:
				printf("Parcelado em 8x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 9:
				printf("Parcelado em 9x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 10:
				printf("Parcelado em 10x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 11:
				printf("Parcelado em 11x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			case 12:
				printf("Parcelado em 12x");
				printf("Valor da sua compra: %f\n", compra_total);
				juros = (compra_total * 4)/100;
				vt = compra_total + juros;
				printf("Valor com acréscimo: %.2f\n", vt);
				break;
			default:
				printf("As lojas Brilho só parcela em até 12x!!\n\n");
				break;
			}
			}
			if(opcao == 2){
				printf("Obrigado por acessar nosso sistema!!!!\n\n\t");
			}
			
		}while(codigo != codigo_cliente);
	}
	
	else{
		printf("Código errado!!!\n\n");
	}
	
	system("pause\n\n");
	return(0);
}
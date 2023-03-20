#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "");
	
	int num = rand()%100, palpite;

	do{
		printf("Digite um palpite: ");
		scanf("%i", &palpite);
		
		if(palpite == num){
			printf("\n\aACERTOU!\n\n");
		}
		else if(palpite > num){
			printf("\tO palpite é maior do que o número da sorte!\n\n");   	
		}
		else if(palpite < num){
			printf("\tO palpite é menor do que o número da sorte!\n\n"); 
		}
	} while(palpite != num);
	
	system("pause");
	return(0);
}
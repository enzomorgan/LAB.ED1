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
			printf("\tO palpite � maior do que o n�mero da sorte!\n\n");   	
		}
		else if(palpite < num){
			printf("\tO palpite � menor do que o n�mero da sorte!\n\n"); 
		}
	} while(palpite != num);
	
	system("pause");
	return(0);
}
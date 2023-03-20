#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	int i, nota, filme_MAV, filme_MEV;
	char opiniao[500];
	
	for(i = 1; i < 20; i++){
		printf("Fale sua opinião sobre o filme: \n");
		scanf("%s", &opiniao);
		printf("Sua nota deve ser de 0 a 4!!\n\n");
		printf("Dê sua avaliação sobre o filme: ");
		scanf("%i", &nota);
		
		if(nota > filme_MAV){
			filme_MAV = nota;
		}
		if(nota < filme_MEV){
			filme_MEV = nota;   	
		}
	}
	
	printf("Filme com maior avaliação: %i\n", filme_MAV);
	printf("Filme com menor avaliação: %i\n", filme_MEV);
	
	system("pause\n\n");
	return(0); 
}
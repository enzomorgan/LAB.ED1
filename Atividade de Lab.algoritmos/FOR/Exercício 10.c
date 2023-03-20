#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int soma, i;
	
	for(i = 1; i < 1000; i++){
		if(i % 3 == 0){
			soma += i;
		}
		else if(i % 5 == 0){
			soma += i;
		}
	}
	
	printf("Soma: %d\n", soma);
	
	system("pause\n\n");
	return(0);
}
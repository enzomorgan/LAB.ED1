#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int A = 16000, B = 25000;
	int anos = 0;
	
	while(A < B){
		A += ((A * 3.0)/ 100.0);
		B += ((B * 2.5)/ 100.0);
		anos++;
	}
	
	printf("Anos necessários %d anos", anos);
	
	system("pause\n\n");
	return(0);
}
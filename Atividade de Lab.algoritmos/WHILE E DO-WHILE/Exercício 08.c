#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float David = 1.70, Lavinia = 1.66;
	int anos = 0;
	
	while(David > Lavinia)
	{
		David = David + 0.02;
		Lavinia = Lavinia + 0.03;
		anos = anos + 1;
	}
	
	printf("São necessários %d anos", anos);
	
	system("pause\n\n");
	return(0);
}
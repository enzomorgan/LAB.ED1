#include <stdio.h>
#include <stdlib.h>


int main(){
	
	float S = 0;
	int i, j = 1;
	
	for(i = 1; i <= 99; i+=2){
		S += (float)(i/j);
		j = j + 1;
	}
	
	printf("Valor de S: %.2f\n\n", S);
	
	system("pause");
	return(0);
}
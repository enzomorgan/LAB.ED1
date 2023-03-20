#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 1, j, k;
	
	for(i = 10, j = 10, k = 10; i >= 1; i--, j--, k--){
		printf("%i\t%i\t%i\n", i, j, k);
	}
	printf("FIM!\n");
	
	system("pause");
	return(0);
}	
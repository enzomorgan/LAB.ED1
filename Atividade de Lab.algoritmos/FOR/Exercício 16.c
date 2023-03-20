#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int n, i;
	float H = 0.0;
	
	printf("Informe um valor: ");
	scanf("%i", &n);
	
	for(i = 1; i <= n; i++){
		H += (1.0/1);
	}
	
	printf("H(n)= %.2f\n\n", H);
	
	system("pause");
	return(0);
}
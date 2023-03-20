#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int n, a, b, f, i;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	a = 0;
	b = 1;
	
	for(i = 1; i <= n; i++){
		if(i == 1){
			printf("%d\n", a);
		}
		else if(i == 2){
			printf("%d\n", b);
		}
		else{
			f = a + b;
			a = b;
			b = f;
			
			if(i == n){
				printf("%d\n", f);
			}
			else{
				printf("%d\n", f);
			}
		}
	}
	
	system("pause");
	return(0);
}
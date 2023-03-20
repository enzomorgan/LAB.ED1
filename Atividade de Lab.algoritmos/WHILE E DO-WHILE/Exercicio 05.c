#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int n, i, maior, menor, par, impar, mult, mult_total, par_total, impar_total;
	float media, media_num;
	
	do{
		for(i = 1; i <= n; i++){
			printf("Informe um número: ");
			scanf("%d", &n);
			
			   if(n > 0){
				   media = (media + n)/n;
				   media_num++;
			   }
			   
			   if(n > maior){
				   maior = n;
			   }
			   
			   if(n < menor){
				   menor = n;
			   }
			   
			   if(n > 0){
				   par = n % 2 == 0;
				   par_total++;
			   }
			   
			   if(n > 0){
				   impar = n % 2 == 0;
				   impar_total++;
			   }
			   
			   if(n > 0){
				   mult = n % 4 == 0;
				   mult_total++;
			   }	
		}
		
	}while(n != 0);
	
			printf("Média dos números positivos: %d\n", media/media_num);
			printf("Maior número: %d\n", maior);
			printf("Menor número: %d\n", menor);
			printf("Total de números pares: %d\n", par/par_total);
			printf("Total de números ímpares: %d\n", impar/impar_total);
			printf("Total de múltiplos de 4: %d\n", mult/mult_total);
	
	system("pause");
	return(0);
}
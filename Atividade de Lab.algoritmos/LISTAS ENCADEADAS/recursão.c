#include <stdio.h>

int potencia(int base, int ep){  //função recursiva

	if(ep==1){  //se o expoente for igual a 1
		return base;  //retornando a base
	}
	return base*potencia(base,ep-1);  //retorna o resultado do cálculo
}

int main(){
	
	int v = potencia(2,4); //variável que recebe a função para fazer o cálculo
	
	printf("%d", v);  //imprimindo
	
	return 0;
}
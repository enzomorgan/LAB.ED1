#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	float nascidas, obitos, habitantes, natalidade, mortalidade;
	int taxa;
	
	printf("Informe o número de habitantes: ");
	scanf("%f", &habitantes);
	printf("Informe o número de crianças nascidas: ");
	scanf("%f", &nascidas);
	printf("Informe o número de mortes: ");
	scanf("%f", &obitos);
	printf("Escolha uma taxa: 1(NATALIDADE) 2(MORTALIDADE): \n");
	scanf("%i", &taxa);
	
	switch(taxa)
	{
	case 1:
		natalidade = (nascidas * 1000)/habitantes;
		printf("Taxa de natalidade: %.2f\n\n", natalidade);
		break;
	case 2:
		mortalidade = (obitos * 1000)/habitantes;
		printf("Taxa de natalidade: %.2f\n\n", natalidade);
		break;
	default:
		printf("Taxa não existente!!!\n\n");
		break;
	}
	
	system("pause");
	return(0);
}
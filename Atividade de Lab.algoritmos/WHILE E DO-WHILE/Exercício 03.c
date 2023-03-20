#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float altura = 1.73f;
    char sexo;
    int acimaMediaFeminino = 0, abaixoMediaFeminino = 0;
	int acimaMediaMascu = 0, abaixoMediaMasc = 0;
	
    while(altura > 0.0f){
        printf("Informe o seu sexo: ");
        scanf("%c", &sexo);

        printf("Informe a sua altura: ");
        scanf("%f", &altura);

        switch(sexo){
            case 'f':
            case 'F':
                if(altura > 1.60f){
                    acimaMediaFeminino += 1;
                }
                else if(altura < 1.60f){
                    abaixoMediaFeminino += 1;
                }    
            break;
            case 'm':
            case 'M':
				if(altura > 1.73f){
                    acimaMediaFeminino += 1;
                }
                else if(altura < 1.73f){
                    abaixoMediaFeminino += 1;
                }    
            break;    
        }
    }

    printf("\n\tSexo Feminino\n");
    printf("Total de alturas acima da média de altura: %d\n", acimaMediaFeminino);
    printf("Total de alturas abaixo da média de altura: %d\n", acimaMediaFeminino);
	printf("\n\tSexo Masculino\n");
	printf("Total de alturas acima da média de altura: %d\n", acimaMediaMascu);
	printf("Total de alturas abaixo da média de altura: %d\n", abaixoMediaMasc);
	
	system("pause");
    return(0);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	
	int numero;
	
	printf("Digite um Número: ");
	scanf("%i",&numero);
	
	printf("\n=== Exibindo Resultados ===\n");
	
	if (numero % 2 == 0) {
		printf("Par.");
	} else {
		printf("Ímpar.");
	}
	
	return 0;
}


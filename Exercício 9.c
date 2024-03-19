#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	
	//Declarando Variáveis.
	int primeiroNumero, segundoNumero, soma, produto; 
	int maiorValor, menorValor;
	float media;
	
	//Solicitando Dados Do Usuário.
	printf("Digite o Primeiro Número: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o Segundo Número: ");
	scanf("%i",&segundoNumero);
	
	//Calculando Dados Do Usuário.
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	media = soma / (float)  2;
	
	if (primeiroNumero > segundoNumero) {
		maiorValor = primeiroNumero;
		menorValor = segundoNumero;
	} else {
		maiorValor = segundoNumero;
		menorValor = primeiroNumero;
	} 
	
	//Exbindo Dados Para Usuário.
	system("cls || clear");
	printf("\n==== Exibindo Dados Para Usuário ====\n");
	printf("Primeira Número: %.1i \n", primeiroNumero);
	printf("Segundo Número: %.1i \n\n", segundoNumero);
	printf("Soma: %.1i \n", soma);
	printf("Produto: %.1i \n", produto);
	printf("Média: %.1f \n\n", media);
	printf("Maior Valor: %.1i \n", maiorValor);
	printf("Menor Valor: %.1i \n", menorValor);
	 
	
	if (primeiroNumero == segundoNumero) {
	
		printf("Os Números São Iguais!");
	} else {
	
		printf("Os Números Não São Iguais!");
	}
}


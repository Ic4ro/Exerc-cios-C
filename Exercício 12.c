#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 
	setlocale(LC_ALL,"");
	
	//Declarando Variáveis.
	char nomeAluno[200];
	float primeiraNota, segundaNota, media;
	
	//Solicitando Dados do Usuário.
	printf("Digite o Nome do Aluno: ");
	scanf("%s",&nomeAluno);
	
	printf("Digite a Primeira Nota do Aluno: ");
	scanf("%f",&primeiraNota);
	
	printf("Digite a Segunda Nota do Aluno: ");
	scanf("%f",&segundaNota);
	
	//Calculando Dados Do Usuário.
	media = ( primeiraNota + segundaNota) / 2;
	
	//Exibindo Resultados.
	if(media >= 9) {
		printf("Nota: A \nAprovado!");
	}
	else if(media >= 7.5){
		printf("Nota: B \nAprovado!");
	}
	else if(media >= 6 && media <7.5){
		printf("Nota: C \nAprovado!");
	}
	else if(media >= 4 && media < 6){
		printf("Nota: D \nReprovado!");
	}
	else if(media < 4){
		printf("Nota: F \nReprovado!");
	}
	
	return 0;
	}

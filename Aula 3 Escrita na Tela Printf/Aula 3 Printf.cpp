#include <stdio.h>
#include <stdlib.h>

int main(){
		int num=0;
		char letra='a';
		float n =5.25;
		
		printf("Meu Programa C\n"); 
		printf("Letra %c \n", letra);  // Para escrever Caractere %c
		printf("Letra %d \n", letra);  // Para escrever o valor numerico da letra dentro da Tabela ASC 
		printf("Numero %d \n", num); // Para escrever um inteiro %d
		printf("Float %f \n", n); // Para escrever um float %f
		
		printf("Letra: %c, Numero: %d, Float: %f \n", letra,num+1,n); // Todos em uma unica linha
	
		
		system("pause");
	return 0;
}

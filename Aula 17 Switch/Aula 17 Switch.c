#include <stdio.h>
#include <stdlib.h>

int main(){
	char ch;
	printf("Digite um simbolo de pontuacao: ");
	scanf("%c",&ch);
	switch(ch){
		case '.':
			printf("Ponto [.] \n");
			break;
		case ',':
			printf("Virgula [,] \n");
			break;
		case ':':
			printf("Dois Pontos [:]\n");
			break;
		case ';':
			printf("Ponto Virgula [;] \n");
			break;
		default:
			printf("N�o � Pontua��o ");
			break;
	}
	
	system("pause");
	return 0;
}

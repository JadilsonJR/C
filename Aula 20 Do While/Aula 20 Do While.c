#include <stdio.h>
#include <stdlib.h>

int menu();

int main(){
	int a,b;
	printf("Digite dois valores inteiros: ");
	scanf("%d %d",&a,&b);
	do{
		printf("%d \n",a);
		a++;
	}while(a<b);
	menu();
	printf("Fim do Programa!\n");
	
	system("pause");
	return 0;
}

int menu(){
	int i;
	do{
		printf("Escolha uma Opcao: \n");
		printf("( 1 ) Opcao 1 \n");
		printf("( 2 ) Opcao 2 \n");
		printf("( 3 ) Opcao 3 \n");	
		scanf("%d",&i);
	}while((i<1) || (i>3));
	printf("Voce escolheu a opcao: %d \n",i);
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
// If aninhado é o uso de outro comando IF, ou if-else dentro de um comando if ou else
	int num;
	printf("Digite um numero:");
	scanf("%d",&num);
	if (num==0){
		printf("O numero e igual a 0.\n");
	}else{
		if (num>0){
			printf("O numero e maior do que 0.\n");
		}else{
			printf("O numero e menor do que 0.\n");
		}
	}
	system("pause");
	return 0;
}

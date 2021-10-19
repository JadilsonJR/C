#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2,res;
	printf("Digite um numero 1: \n");
	scanf("%d",&num1);
	printf("Digite um numero 2: \n");
	scanf("%d",&num2);
	res=num1>num2?num1:num2;// Numero 1 é maior do num2 caso sim res recebe aprimeira condição caso não a segunda 
	printf("O numero maior e %d \n",res);
	
	/*
	Outro modo 
	(num1>num2) ? printf("Numero 1 e maior\n"):("Numero 2 e maior\n");
	*/
	system("pause");
	return 0;
}

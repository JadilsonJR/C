#include <stdio.h>
#include <stdlib.h>

int main(){
//	Comando Else é o complemento do comando IF usado quando a primeira condição não é satisfeita

	int x;
	printf("Digite um Numero: ");
	scanf("%d",&x);
	if(x%2 ==0){
		printf("O numero %d e PAR.\n",x);
	}else{
		printf("O numero %d e IMPAR.\n",x);
	}
	
	
	system("pause");
	return 0;
}

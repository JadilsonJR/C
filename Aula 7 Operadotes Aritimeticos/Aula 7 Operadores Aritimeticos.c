#include <stdio.h>
#include <stdlib.h>

/* 
	Operadore Aritimeticos:
	soma:            +
	subtração:       -         
	multiplicação:   *
	divisão:         /
	resto:           %
	*/
int resto();	
	
int main(){
	int num1=1,num2=2,num3=3,res;
	

	printf("Soma= %d \n",res=num1+num2+num3);
	printf("Subtracao = %d \n", res=num1-num2-num3);
	printf("Multiplicacao = %d", res=num1*num2*num3);
	
	system("pause");
	resto();
	return 0;
}

int resto(){
	int x1, x2 =9;
	x1 =x2%2;
	printf("x1 = %d \n",x1);
	x1=x2%5;
	printf("x1=%d \n",x1);
	system("pause");
	return;
}

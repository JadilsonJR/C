#include <stdio.h>
#include <stdlib.h>

int main(){
////	Operadores Logicos
//	&& Operador "E"
//	|| Operador "OU"
//   ! Operador "Negação"
  
	int r, x=5,y=3;
	r=(x>2)&&(y<x);
	printf("Resultado = %d \n",r); 
	
	r=(x>2)||(y<x);
	printf("Resultado = %d \n",r); 
	
	system("pause");
	return 0;
}

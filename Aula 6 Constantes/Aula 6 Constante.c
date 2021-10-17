#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415 //Declarando uma constante 
int main(){
	const int num=10; // Criando uma constante com uma variavel 
	printf("Constante %d \n",num);
	printf("PI = %f",PI);
	return 0;
}

// A diferencia entre Define e const é que o Define irar substituir o item no progrma
// quando for copilar, já o const vai criar um espaço na memoria so que não poderar ser alterado 

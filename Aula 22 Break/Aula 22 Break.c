#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("Digite o valor de A:");
	scanf("%d",&a);
	printf("Digite o valor de B:");
	scanf("%d",&b);
	while(a<=b){
		a+=1;
		if(a==5){
			break;
		}
		printf("%d\n",a);
	}
	system("pause");
	return 0;
}

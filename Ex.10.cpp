#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1,num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
   
    if(num1 > 10 && num2 > 20){
    	printf("\n%d > 10 E %d > 20 ? 1\n", num1, num2);
	}
	
	if(num1 > 10 || num2 > 20){
    	printf("\n%d > 10 OU %d > 20 ? 1\n", num1, num2);
	}
	
	if(num1 > 10 && num2 > 20){
		printf("\nNao %d > 10 E %d > 20 ? 0\n", num1, num2);
	}
	
	if(! num1 > 10 || num2 > 20){
		printf("\nNao %d > 10 OU %d > 20 ? 0\n", num1, num2);
	}
	system("pause");
	
	return 0;
}
#include <stdio.h>

int main(){
	
	int n1;
	
	printf("Digite um n�mero: ");
	scanf("%i", &n1);
	
	
	if (n1 % 2 == 0){
		printf("o numero e par");
	}else{
		printf("o numero e impar");
	}
}

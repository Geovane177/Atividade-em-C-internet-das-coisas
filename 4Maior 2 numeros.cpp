#include <stdio.h>

int main(){

int n1, n2;


printf("Digite dois números: ");
scanf("%i", &n1);
scanf("%i", &n2);

if (n1 > n2){
	printf("o %i e maior do que %i", n1, n2);
}else{
	printf("o %i e maior do que %i", n2, n1);
}
}

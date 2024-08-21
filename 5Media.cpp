#include <stdio.h>

int main(){
	
	int n1, n2, n3, media;
	
	printf("Digite 3 numeros: ");
	scanf("%i", &n1);
	scanf("%i", &n2);
	scanf("%i", &n3);
	media = (n1 + n2 + n3) / 3;
	printf("A media entre %i, %i e %i é %i", n1, n2, n3, media);
}

#include<stdio.h>
#include<stdlib.h>

int main(){

	int *endereco;
	
	endereco = malloc(sizeof(int));
	
	scanf("%d",endereco);
	printf("%d",endereco);
}

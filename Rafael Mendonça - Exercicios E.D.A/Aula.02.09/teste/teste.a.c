#include<stdio.h>
#include<stdlib.h>
#define TAM 3

void leia_vetor(int v[]){
	
	int i;
	for(i=0;i<TAM;i++){
		printf("v[%d] :",i);
		scanf("%d", v+i);
	}
}
int main(void){
	int v[TAM];
	int i;
	leia_vetor(v);
	for(i=0;i<TAM;i++){
		printf("%d",*(v+i));
	}
	printf("\n");
	return(0);
}

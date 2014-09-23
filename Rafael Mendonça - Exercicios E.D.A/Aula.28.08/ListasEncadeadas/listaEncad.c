#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct lista{
	int info;
	struct lista *prox;
}no;

int main(void){
	no *header;
	no *p;
	int i=0;
	header = NULL;
	p=malloc(sizeof(no));
	p->info=i;
	p->prox=header;
	header=p;
	i++;
	while(i<MAX){
		p=malloc(sizeof(no));
		p->info=i;
		p->prox=header;
		header=p;
		i++;
	}
	i=0;
	while(i<MAX){
		printf("%d",p->info);
		p=p->prox;
	}
	
}

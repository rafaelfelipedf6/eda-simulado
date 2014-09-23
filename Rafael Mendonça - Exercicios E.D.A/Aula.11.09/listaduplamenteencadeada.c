#include <stdlib.h>
#include <stdio.h>

struct _no{
	int info;
	struct _no *prox;
	struct _no *ant;
}; 
typedef struct _no no;


int main (void){
	no *aux, *p, *l=NULL,*ultimo = NULL;
	int i,n;

	i = 0;
	while (i<5){
		scanf("%d", &n);
		
		p = malloc(sizeof(no));		
		if(l==NULL){
			p->ant =  NULL;	
			p->prox = NULL;
			p->info = n;
			l=p;
			ultimo=p;
		}else{
			p->ant = ultimo;
			p->prox = NULL;
			p->info = n;
			ultimo=p;	
		}			
			 
		printf("n = %d  info = %d  endereço =%d  prox=%d ant=%d  cabecalho=%d ultimo=%d \n ",n,p->info,p,p->prox,p->ant,l,ultimo);
		i++;
		
	}
	
	while (p != NULL){
	
 	printf("info = %d\n", p->info);

	aux = p;
	p = p->prox;
	}
	
	p=aux;
	while (p != NULL){

	printf("info = %d\n", p->info);

	p = p->ant;
	}
}

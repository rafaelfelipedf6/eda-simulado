#include <stdlib.h>
#include <stdio.h>

struct _no{
	int info;
	struct _no *prox;
	struct _no *ant;
}; 
typedef struct _no no;

struct cabecalho{
	int nelem;
	no *primeiro;
	no *ultimo;
};
typedef struct cabecalho cab;

int main (void){
	cab *l;
	no *p;
	int i,n;

	l = malloc (sizeof(cab));
	l->primeiro = NULL;
	l->ultimo = NULL;
	l->nelem = 0;
	
	i=0;
	while (i<5){
	scanf ("%d", &n);

	p = malloc(sizeof(no));
	p->info = n;
	p->prox = l->primeiro;
	p->ant = NULL;
	if (l->nelem != 0)
		l->primeiro->ant = p;
	else
		l->ultimo = p;
	l->primeiro = p;
	l->nelem++;
	

	i++;
	}
	
	p = l->ultimo;
	while (p != NULL){
	printf("info = %d\n", p->info);
	
	p = p->ant;
	}
}

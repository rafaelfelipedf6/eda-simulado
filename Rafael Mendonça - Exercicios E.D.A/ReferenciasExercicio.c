#include<stdio.h>
#include<stdlib.h>

#define tam_max 50

void leia_nome(char *s)
{
	int i=0,c;
	c=getchar();
	while(c!= '\n')
	{	
		s[i] = c;
		c=getchar();
		i++;
	}
	s[i] = '\n';
	s[i+1] = '\0';
}

int main()
{
	char aluno[tam_max];
	printf("\nDigite o nome do Aluno: ");
	leia_nome(aluno);
	printf("\nO nome digitado foi: %s\n",aluno);
	printf("%c",&d);	
return(0);
}

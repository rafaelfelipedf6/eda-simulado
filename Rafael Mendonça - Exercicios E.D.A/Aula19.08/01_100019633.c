#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define TRUE 1
#define FALSE 0

int thabit(int a, int b)
{
	int i;
	int thab;
	for(i=0;i<a;i++)
	{
		thab=3*pow(2,a)-1;
		if(thab==b)
			return TRUE;

	}

	return FALSE;
		
}
int main()
{
	int n,k,c;
	scanf("%d",&n);
	scanf("%d",&k);	
	c = thabit(k,n);
	if(c == TRUE)
	{
		printf("T\n");
	}else
	{
		printf("N\n");
	}
	
		
return(0);
}

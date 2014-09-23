#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int main()
{
	int a=0,i=0,vet[MAX],n=6;
	while(i<6)
	{
		scanf("%d",&vet[i]);
		i++;
	}
	i=0;
	do
	{
		if(vet[i]>vet[i+1])
		{
			a=vet[i];
			vet[i]=vet[i+1];
			vet[i+1]=a;
			
		}
		i++;
		if(i==n-1){
			i=0;
			n--;		
		}
		
	}while(i<n);
	i=0;
	while(i<6)
	{
		printf("%d  ",vet[i]);
		i++;	
	}
return(0);
system("pause");
}

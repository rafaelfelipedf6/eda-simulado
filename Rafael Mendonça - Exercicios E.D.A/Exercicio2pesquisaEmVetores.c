#include<stdio.h>
#include<stdlib.h>
#define MAX 6

int main()
{
	int a=0,i=0,vet[MAX],n=6,k,ls,li;
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

	scanf("%d",&k);
	i=0;
	ls=5;
	li=0;
	while(i<MAX)
	{
				
		i=(ls+li)/2;
		if(k==vet[i]){
			printf("o numero k=%d esta na posicao %d do vetor",k,i+1);
			i=MAX;		
		}else if(k>vet[i]){
			li=i;	
		}else if(k<vet[i]){ 
			ls=i;
		}if(k!=vet[i] && ls==li ){printf("Nao existe no vetor");i=MAX;}
		
	}
return(0);
system("pause");
}

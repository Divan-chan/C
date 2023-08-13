#include <stdio.h>
#include <stdlib.h>

int NumbLim(int[],int[],int);

int main(int argc, char *argv[]) 
{
	int x,n,i,j;
	int *m,*nem;
	printf("n: ");
	scanf("%d",&n);
	if((m=(int*)malloc(n*sizeof(int)))==NULL)
	{
		printf("error");
		return 1;
	}
	printf("array: \n");
	for(i=0;i<n;i++) scanf("%d",&m[i]);
	/*for(i=0;i<n;i++) printf("%d ",m[i]);*/
	printf("limit: ");
	scanf("%d",&x);
	n=NumbLim(m,nem,n);
	while (m[i]<x) printf("%d ",m[i]);
	//for(j=0;j<n;j++) printf("%d ",nem[j]);
	free(m);
	return 0;
}

int NumbLim(int m[],int nem[],int n)
{
	int tmp,i,j,x;
	for(i=0;i<n;i++)
	{
		if(m[i]>m[i+1])
		{
			tmp=m[i];
			m[i]=m[i+1];
			m[i+1]=tmp;
		}
	}
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(m[i]<x)
			{
				m[i]=nem[j];
			}
		}
	}
	return nem[j]; */
}

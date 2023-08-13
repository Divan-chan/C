#include <stdio.h>
#include <stdlib.h>

void BubbleSort(float*,int);

int main(int argc, char *argv[]) 
{
	float *m;
	int i,n;
	printf("n? ");
	scanf("%d",&n);
	if((m=(float*)malloc(n*sizeof(float)))==NULL)
	{
		printf("memory error");
		return 1;
	}
	printf("array:\n");
	for(i=0;i<n;i++) scanf("%f",&m[i]);
	BubbleSort(m,n);
	for(i=0;i<n;i++) printf("%f",m[i]);
	free(m);
	return 0;
}

void BubbleSort(float *m,int n)
{
	int i,swap;
	float tmp;
	do
	{
		swap=0;
		for(i=0;i<n-1;i++)
			if(m[i]<m[i+1])
			{
				tmp=m[i];
				m[i]=m[i+1];
				m[i+1]=tmp;
				swap++;
			}
	}
	while(swap);
}

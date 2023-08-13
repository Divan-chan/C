#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main() 
{
	float m[SIZE],tmp;
	int i,n;
	printf("n? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("m[%d]? ",i+1);
		scanf("%f",&m[i]);
	}
	//-----------------------------------
	for(i=0;i<n/2;i++)
	{
		tmp=m[i];
		m[i]=m[n-1-i];
		m[n-1-i]=tmp;
	}
	//------------------------------------
	for(i=0;i<n;i++) printf("%.1f ",m[i]);
	
	return 0;
}

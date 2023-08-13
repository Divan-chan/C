#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

int main() 
{
	int m[SIZE],i,n;
	srand(time(NULL));
	printf("n? ");
	scanf("%d",&n);
	for(i=0;i<n;i++) m[i]=rand()%21-10;
	for(i=0;i<n;i++) 
	{
		printf("%4d",m[i]);
		if((i+1)%20 == 0) printf("\n");
	}
	return 0;
}

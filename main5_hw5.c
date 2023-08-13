#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int counter=0,flag=0;
	float prev,curr;
	printf("data? ");
	scanf("%f",&prev);
	while(1)
	{
		printf("data? ");
		if(!scanf("%f"),&curr) break;
		if(prev==curr)
		{
			if(flag==0)
			{
				flag=1;
				counter++;
				
			}
		}
		else flag=0;
		prev=curr;
	}
	printf("counter = %d",counter);
	return 0;
}

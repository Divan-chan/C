#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 8

int main() 
{
	char name[MAX_SIZE];
	int i;
	printf("input your name: ");
	for(i=0;i<MAX_SIZE-1;i++)
	{
		name[i]=getchar();
		if(name[i]=='\n') break;
	}
	name[i]='\0';
	printf("Hello %s!",name);
	fflush(stdin);
	return 0;
}

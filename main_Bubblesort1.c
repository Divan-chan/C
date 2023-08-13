#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main() 
{
	int n,a,b,i,m[32];
	printf("Amount of numbers: ");
    scanf("%d", &n);
    printf("Numbers: ");
    for(i=0;i<n;i++) scanf("%d", &m[i]);
    for(i=0;i<n-1;i++) 
	{
       for(a=0;a<n-i-1;a++) 
	   {  
           if(m[a]>m[a+1]) 
		   {
        		b=m[a];
            	m[a]=m[a+1];
				m[a+1]=b; 
           }
        }
    }
    for(i=0;i<n;i++) printf("%d ", m[i]);
	return 0;
 }

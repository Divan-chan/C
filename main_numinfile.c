#include <stdio.h>
#include <stdlib.h>

int FSumN(FILE*);
int FSumEOF(FILE*);

int main(int argc, char *argv[]) 
{
	FILE *file;
	if(!(file=fopen("data.txt","r")))
	{
		printf("bad file!");
		return 1;
	}
	printf("sum1 = %d\n",FSumN(file));
	fseek(file,0,0); 						//перемотка файла в начало
	printf("sum2 = %d\n",FSumEOF(file));
	fclose(file);
	return 0;
}

int FSumN(FILE *f)
{
	int n,i,s=0,x;
	fscanf(f,"%d",&n);
	for(i=0;i<n;i++)
	{
		fscanf(f,"%d",&x);
		s+=x;
	}
	return s;
}

int FSumEOF(FILE *f)
{
	int s=0,x;
	while(!feof(f))					//считывание до конца файла, т.е. пока не конец файла
	{
		fscanf(f,"%d",&x); 			//лучше писать if(fscanf(f,"%d",&x)==EOF) break;EOF = -1
		s+=x;
	}
	return s;
}

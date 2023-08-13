#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

int main(int argc, char *argv[]) 
{
	FILE *file;
	int m[SIZE],i;
	srand(time(NULL));
	for(i=0;i<SIZE;i++) m[i]=rand()%1000;					//предел
	//-----------------------------------
	file=fopen("text.txt","w"); 							//текстовый файл
	for(i=0;i<SIZE;i++) fprintf(file,"%d ",m[i]);
	fclose(file);
	file=fopen("binary.txt","wb");							//бинарный файл
	fwrite(m,SIZE*sizeof(int),1,file); 						//1 - количество обращений к файлу
	fclose(file);
	return 0;
}

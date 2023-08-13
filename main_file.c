#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

int main(int argc, char *argv[]) 
{
	FILE *file;
	int m[SIZE],i;
	srand(time(NULL));
	for(i=0;i<SIZE;i++) m[i]=rand()%1000;					//������
	//-----------------------------------
	file=fopen("text.txt","w"); 							//��������� ����
	for(i=0;i<SIZE;i++) fprintf(file,"%d ",m[i]);
	fclose(file);
	file=fopen("binary.txt","wb");							//�������� ����
	fwrite(m,SIZE*sizeof(int),1,file); 						//1 - ���������� ��������� � �����
	fclose(file);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* � ���� ������� ����������� ����������� ��� ������� �������� ������ �� ������ � 15 ������� ������, ��� ���� ����. ��� 50 ��*/
int main() 
{
	float w;
	char deliv[64];
	char ins[16];
	char pack[16];
	char speed[16];
	printf("Weight of cargo: ");
	scanf("%f", &w);
	printf("\nPlace of delivery: ");
	scanf("%s\0", deliv);
	printf("\nDo you need insurance? ");
	scanf("%s\0", ins);
	printf("\nDo you need special package? ");
	scanf("%s\0", pack);
	printf("\nStandart or express? ");
	scanf("%s\0", speed);
	float cost_of_delivery(float cost);
	printf("\nThe cost of delivery process is %f", cost_of_delivery);
	return 0;
}

int* weight(int w, int m)
{
	if(w>0&&w<1) return m=100;
	if(w>=1&&w<3) return m=120;
	if(w>=3&&w<5) return m=130;
	if(w>=5&&w<10) return m=150;
	if(w>=10&&w<25) return m=200;
	if(w>=25&&w<=50) return m=300;
	else return 1;
}

int* place_of_deliv(char deliv[64], int d, float k)
{
	if(deliv='�����������')
	{
		d=3340;
	} 
	if(deliv='�����-���������') 
	{
		d=705;
	}
	if(deliv='������ ��������') 
	{
		d=423;
	}
	if(deliv='�����������') 
	{
		d=9004;
	}
	if(deliv='���������') 
	{
		d=1354;
	}
	if(deliv='���������') 
	{
		d=970;
	}
	if(deliv='������������') 
	{
		d=1785;
	}
	if(deliv='������') 
	{
		d=816;
	}
	if(deliv='�������') 
	{
		d=6187;
	}
	if(deliv='�����������') 
	{
		d=1236;
	}
	if(deliv='����') 
	{
		d=182;
	}
	if(deliv='�����������') 
	{
		d=1483;
	}
	if(deliv='�������') 
	{
		d=5194;	
	}
	if(deliv='��������') 
	{
		d=2878;
	}
	if(deliv='����������') 
	{
		d=8069;
	}
	else return 1;
	for(;d<1000;) k=1;
	for(;d>1000&&d<2000;) k=1,2;
	for(;d>2000&&d<4000;) k=1,4;
	for(;d>4000&&d<6000;) k=1,6;
	for(;d>6000&&d<8000;) k=1,8;
	for(;d>8000;) k=2;
	return 0;
}

int* insurance(char ins[16], int h)
{
	if(ins=('yes'||'��')) h=200;
	else if(ins='no'||ins='not'||ins='���') h=0;
	else return 1;
}

int* package(char pack[16], int p)
{
	if(pack='yes'||pack='��') p=100;
	else if(pack='no'||pack='not'||pack='���') p=0;
	else return 1;
}

int* stand_exp(char speed[16], int a)
{
	if(speed='standart'||speed='��������') a=100;
	else if(speed='express'||speed='��������') a=250;
	else return 1;
}

float cost_of_delivery(static float cost, float k, int h,p,a,m)
{
	int weight(int w, int m);
	void place_of_deliv(char deliv[64], int d, float k);
	int insurance(char ins[16], int h);
	int package(char pack[16], int p);
	int stand_exp(char speed[16], int a);
	cost=(m+h+p+a)*k;
	return (cost);
}

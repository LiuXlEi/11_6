#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//�����������Ӵ�С�����

int main()
{
	int a ;
	int b ;
	int c ;
	int x ;
	printf("��������������\n");
	scanf("%d%d%d",&a, &b, &c);
	if (a < b)
	{   
		x = a;
		a = b;
		b = x;

	}
	if (a < c)
	{
		x = a;
		a = c;
		c = x;

	}
	if (b < c)
	{
		x = b;
		b = c;
		c = x;

	}
	printf("�Ӵ�С����Ϊ��%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}

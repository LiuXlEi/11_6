#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//��10 �����������ֵ��

int main()
{
	int a[10];
	int i = 0;
	int MAX = 0;
	printf("������ʮ������:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		if (MAX<a[i])
		{
			MAX = a[i];

		}
	}
	printf("\n���ֵΪ��MAX=%d\n", MAX);
	system("pause");
	return 0;
}
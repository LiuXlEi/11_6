#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//求10 个整数中最大值。

int main()
{
	int a[10];
	int i = 0;
	int MAX = 0;
	printf("请输入十个整数:\n");
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
	printf("\n最大值为：MAX=%d\n", MAX);
	system("pause");
	return 0;
}
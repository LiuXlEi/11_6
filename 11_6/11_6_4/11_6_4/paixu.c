#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//将三个数按从大到小输出。

int main()
{
	int a ;
	int b ;
	int c ;
	int x ;
	printf("请输入三个数字\n");
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
	printf("从大到小排序为：%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//编写程序数一下 1到 100 的所有整数中出现多少次数字9
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 10 == 9)
		{
			j++;
		}
		if (i / 10 == 9)
		{
			j++;
		}
	}
	printf("总共输出了：%d 个数字9\n", j);
	system("pause");
	return 0;
}
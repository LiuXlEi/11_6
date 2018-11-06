#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//求两个数的最大公约数。

int main()
{
	int a = 0;
	int b = 0;
	int x = 0;
	printf("请输入a，b两个值\n");
		scanf("%d%d", &a, &b);
		x = a;
		if (x > b);
		{
			x = b;
		}
		for (int i = x; i >= 1; i--)

		{

			if (a%i == 0 && b%i == 0)

			{

				printf("最大公约数：%d \n", i);

				break;

			}

		}

	system("pause");
	return 0;

}
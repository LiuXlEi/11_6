#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//给定两个整形变量的值，将两个值的内容进行交换。

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入你需要交换的两个值:\n");
	scanf("%d%d", &a, &b);
		c = a;
	    a = b;
		b = c;
	printf("在交换之后：\n%d %d\n", a, b);
		
	system("pause");

	return 0;
}
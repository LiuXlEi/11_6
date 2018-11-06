#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//不允许创建临时变量，交换两个数的内容


int main()
{
	int a = 0;
	int b = 0;
	printf("请输入你需要交换的两个值:\n");
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;

	printf("在交换之后：\n%d %d\n", a, b);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
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
	printf("�ܹ�����ˣ�%d ������9\n", j);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//�����������α�����ֵ��������ֵ�����ݽ��н�����

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("����������Ҫ����������ֵ:\n");
	scanf("%d%d", &a, &b);
		c = a;
	    a = b;
		b = c;
	printf("�ڽ���֮��\n%d %d\n", a, b);
		
	system("pause");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//�������������Լ����

int main()
{
	int a = 0;
	int b = 0;
	int x = 0;
	printf("������a��b����ֵ\n");
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

				printf("���Լ����%d \n", i);

				break;

			}

		}

	system("pause");
	return 0;

}
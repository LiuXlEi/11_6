//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{  
//	
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (a % 4 == 0)
//		{
//			if (a % 100 != 0)
//			{
//				printf("%d ", a);
//				
//			}
//		}
//		if (a % 400 == 0)
//		{
//			printf("%d ", a);	
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j == i)
			printf("%d\n ", i);
	}

	system("pause");
	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, j;  // i, j�����л��� 
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++)
//			// %2d ���ƿ��Ϊ�����ַ������Ҷ��룻�����Ϊ %-2d ��Ϊ�����		
//			printf("%d*%d=%2d ", i, j, i*j);
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

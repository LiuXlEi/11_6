#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//������A�е����ݺ�����B�е����ݽ��н�����������һ����

int main()
{
	int arr1[] = { 6, 3, 5, 7, 9 };
	int arr2[] = { 3, 9, 5, 8, 7 };
	int x;
	int i = 0;
	printf("����A�а�����6,3,5,7,9\n");
	printf("����B�а�����3,9,5,8,7\n\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		x = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = x;
	}
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("  %d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("  %d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
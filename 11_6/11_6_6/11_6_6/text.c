#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

int main()
{
	int arr1[] = { 6, 3, 5, 7, 9 };
	int arr2[] = { 3, 9, 5, 8, 7 };
	int x;
	int i = 0;
	printf("数组A中包含：6,3,5,7,9\n");
	printf("数组B中包含：3,9,5,8,7\n\n");
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
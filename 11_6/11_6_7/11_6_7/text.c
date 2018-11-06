#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ¡£ 

int main()
{
	int i = 0;
	int j = 0;
	double sum = 0;
	i = -1;
	for (j = 1; j <= 100; j++)
	{
		i = -1 * i;
		sum = sum + i*(1.0 / j);
	}
	printf("%f\n", sum);
	system("pause");
	return 0;
}
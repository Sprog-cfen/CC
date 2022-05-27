#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		printf("较大的数为；a");
	}
	else if (a=b)
	{
		printf("两数相等");
	}
	else
	{
		printf("较大的数为：b");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		printf("�ϴ����Ϊ��a");
	}
	else if (a=b)
	{
		printf("�������");
	}
	else
	{
		printf("�ϴ����Ϊ��b");
	}
	return 0;
}
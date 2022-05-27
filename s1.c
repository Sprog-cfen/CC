#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int age = 0;
//	printf("请输入一个数");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年");
//	}
//	else if (age>=18&&age<30)
//	{
//		printf("壮年");
//	}
//	else
//	{
//		printf("青年");
//	}
//		return 0;
//}




//ADD(a, b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &i, &j);
//	int m =ADD(i, j);
//	printf("两个数的和为：%d",m);
//
//	return 0;
//}


//swap(int* pa, int* pb)
//{
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}


//int number(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//		
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 200; i++)
//	{
//		if (1 == number(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int i = 0;
//	printf("请输入一个数：");
//	scanf("%d", &i);
//	print(i);
//	//printf("%d", i);
//
//	return 0;
//}

//
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
////}
//
//int fac(n)
//{
//	int j = 0;
//	int ret=1;
//	for (j = 1; j <= n; j++)
//	{
//		ret *= j;
//	}
//	return ret;
//
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &i);
//	ret = fac(i);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[3][3] = { 1,2,3,4,5,6,7,8 };
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[3][3] = { 1,2,3,4,5,6,7,8 };
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//		}
//	}
//
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = {"hehe",{100,'w',"hello",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.s.arr);
//	printf("%c\n", t.s.c);
//
//	return 0;
//
//}

struct S
{
	char name[20];
	int age;
	char num[12];
	char sex[5];
};

//int main()
//{
//	struct S s = { "李四",40,"123456789014","男" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%c\n", s.num);
//	printf("%s\n", s.sex);
//	return 0;
//}
//
//int main()
//{
//	printf("a\bre\'hi\'y\\\bou\n");
//	printf("a\\bre\"\?\n");
//	return 0;
//}


struct Book
{
	char name[20];
	short num;
};

int main()
{
	struct Book b = { "你好，世界",55 };
	printf("书名为：%s\n",b.name );
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}


//int Fact(unsigned int n)
//{
//	if (n == 0)
//		return 1;
//	else //n>0
//		return n * Fact(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//4	
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//


//void Print(int n)//1234
//{
//	if (n > 9)
//	{
//		Print(n / 10);//123
//		printf("%d ", n % 10);//4
//	}
//	else
//	{
//		printf("%d ", n % 10);
//	}
//}

//void Print(int n)	
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);//Print函数是用来打印n的每一位
//
//	return 0;
//}

//
//int Fact(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//


//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}


//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
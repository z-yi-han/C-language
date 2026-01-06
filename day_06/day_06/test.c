#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数的定义
//int Add(int x,int y)//形参
//{
//	int z = 0;
//	z = x + y;
//	return z;
//	//return x+y;
//}
//void print()
//{
//	printf("hehe\n");
//}
//void test(int n)
//{
//	if (n <= 0)
//	{
//		return;
//	}
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//int c = a + b;
//	int r = Add(a, b);//函数的调用，实参
//	printf("%d\n", r);
//	return 0;
//}
//int test(int n)//判断n是奇数还是偶数
//{
//	if (n % 2 == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	return 0;
//}
//void set_arr(int arr2[10], int sz2)
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		arr2[i] = -1;
//	}
//}
//void print_arr(int arr2[],int sz2)
//{
//	for (int i = 0; i < sz2; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	//写一个函数将arr数组的内容全部设置为-1
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	set_arr(arr1,sz1);
//	//写一个函数将arr数组的内容全部打印出来
//	print_arr(arr1, sz1);
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int get_days_of_month(int y,int m)
//{
//	int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//	int day = days[m];
//	if (is_leap_year(y) && m == 2)
//		day += 1;
//	return day;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d%d", &year, &month);
//	int days = get_days_of_month(year,month);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//函数声明
//就是告诉编译器函数名是什么，参数类型是什么，返回类型是什么
//int is_leap_year(int y);
//
//int main()
//{
//    int y = 0;
//    scanf("%d", &y);
//    int r = is_leap_year(y);//函数调用
//    if (r == 1)
//        printf("闰年\n");
//    else
//        printf("非闰年\n");
//
//	return 0;
//}
//
////函数的定义
//int is_leap_year(int y)
//{
//    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//        return 1;
//    else
//        return 0;
//}
//#include"Add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret=Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
//int a = 10;//全局变量
//
//void test()
//{
//
//}
//
//int main()
//{
//	{
//		printf("1: a = %d\n", a);
//	}
//
//	printf("2: a = %d\n", a);
//
//	return 0;
//}


//int a = 0;
//
//int main()
//{
//	//
//	{
//		//...
//		printf("1: a = %d\n", a);
//	}
//
//	printf("2: a = %d\n", a);
//	//
//	return 0;
//}
//程序的生命周期 == main函数的生命周期
//static 修饰局部变量
//void test()
//{
//    static int n = 0;
//    n++;
//    printf("%d ", n);
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 5; i++)//5次
//    {
//        test();
//    }
//    return 0;
//}
//


//声明
//extern 是用来声明外部符号的

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//


extern int Add(int x, int y);

int main()
{
    printf("%d\n", Add(7, 3));
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//例子：输入一个整数，判断是否为奇数
//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("奇数\n");
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	return 0;
//}


//输入一个年龄， >= 18岁就输出：成年，否则就输出：未成年

//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以恋爱了\n");
//	}	
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	if (num == 0)
//		printf("输入的数是0\n");
//	else
//	{
//		if (num > 0)
//			printf("输入的数是正数\n");
//		else
//			printf("输入的数是负数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	if (num == 0)
//		printf("输入的数是0\n");
//	else if (num > 0)
//		printf("输入的数是正数\n");
//	else
//		printf("输入的数是负数\n");
//
//	return 0;
//}
//


//输入一个整数，如果是正数，再判断是奇数还是偶数，并输出；如果不是正数则输出：非正数。

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		//判断奇数和偶数
//		if (num % 2 == 0)
//		{
//			printf("偶数\n");
//		}
//		else
//		{
//			printf("奇数\n");
//		}
//	}
//	else
//	{
//		printf("非正数\n");
//	}
//	return 0;
//}


//  输入一个人的年龄
//  如果年龄 < 18岁，打印"少年"
//	如果年龄在18岁至44岁打印"青年"
//	如果年龄在45岁至59岁打印"中老年"
//	如果年龄在60岁至89岁打印"老年"
//	如果90岁以上打印"老寿星"

//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else //>=18
//	{
//		if (age <= 44)
//			printf("青年\n");
//		else //>44
//		{
//			if (age <= 59)
//				printf("中老年\n");
//			else //>59
//			{
//				if (age <= 89)
//					printf("老年\n");
//				else
//					printf("老寿星\n");
//			}
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)
//		printf("青年\n");
//	else if (age <= 59)
//		printf("中老年\n");
//	else if (age <= 89)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//
//	return 0;
//}
//

//
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    }
//    return 0;
//}
//

//<高质量C/C++编程>
//



//int main()
//{
//	printf("%d\n", 2 == 2);
//	return 0;
//}
//


//int main()
//{
//	int a = 0;
//	if (a == 3)//判断相等
//	{
//
//	}
//	a = 3;//赋值
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (3 == a)//判断相等
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	//a = 3;//赋值
//	return 0;
//}
//
//

//
//int main()
//{
//	int age = 10;
//	//18<=age<=40
//	//if (18 <= age <= 40)
//	if(age>=18 && age<=40)
//	{
//		printf("青年\n");
//	}
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//
//    //if (a > 5)
//    //    b = 3;
//    //else
//    //    b = -3;
//
//    b = (a > 5 ? 3 : -3);
//
//    printf("%d\n", b);
//    return 0;
//}
//
//

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//
//	//if (a > b)
//	//	m = a;
//	//else
//	//	m = b;
//
//	printf("%d\n", m);
//
//	return 0;
//}
//

//int main()
//{
//	int b = 0;
//	int c = 4;
//	int a = (a=3, a+3, b=c*3, c=2*a+b);
//	//       a=3       b=12   c=18
//	//逗号表达式，会从左向右一次计算，但是整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", a);
//	printf("%d\n", c);
//
//	return 0;
//}
//


//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	//flag为假，我们做一些事
//	if (flag == 0)
//	{
//		printf("do some thing\n");
//	}
//	if (!flag)
//	{
//		printf("do some thing\n");
//	}
//	return 0;
//}
//
//


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("春季\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month==1 || month==2  || month==12)
//	{
//		printf("冬季\n");
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	//(()&&())||()
//	//if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	//{
//	//	printf("闰年\n");
//	//}
//	//else
//	//{
//	//	printf("不是闰年\n");
//	//}
//
//	if ((year % 4 == 0) && (year % 100 != 0))
//	{
//		printf("闰年\n");
//	}
//	else if (year % 400 == 0)
//	{
//		printf("闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//
//    i = a++||++b||d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//
//    //
//    return 0;
//}
//

//练习：输入任意一个整数值，计算除3之后的余数
//0 1 2
//

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("余数是0\n");
//	else if (num % 3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//
//	return 0;
//}
//

//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
//}



//int main()
//{
//	int num = 0.0;
//	int n = 1;
//	scanf("%d", &num);
//	switch (num%3)//整型表达式
//	{
//	case 0://整型常量表达式
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误，请输入1~7的数字\n");
//		break;
//	}
//	return 0;
//}


//1. 输入1 - 5，输出的是“工作日”;
//2. 输入6 - 7，输出“休息日”

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误，请输入1~7的数字\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	//while (1)
//	//	printf("hehe\n");
//
//	return 0;
//}

//练习：在屏幕上打印 1~10 的值


//int main()
//{
//	//i是循环变量
//	int i = 1;//初始化
//
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//		++i;//调整
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//1234
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}

//for循环
//for循环 把初始化，调整，判断三个部分放在了一起
//

//int main()
//{
//	int i = 0;//循环变量
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	int sum =  0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%3 == 0)
//			sum = sum + i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//使用 do while 循序在屏幕上打印1~10的值

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//12
//	int count = 0;//计数
//
//	//n = 0
//	do
//	{
//		count++;//2
//		n = n / 10;
//	} while (n);
//
//	printf("%d\n", count);
//
//	return 0;
//}
//

//使用while在屏幕上打印1~10

//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//printf("%d ", i);
//	}
//
//	return 0;
//}
//
//continue 是用于跳过本次循环的continue后边的代码，直接去判断部分，看是否进行下一次判断
//

//使用for在屏幕上打印1~10

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否是素数
		//如果是素数，就打印，不是素数就跳过
		//拿2~i-1之间的数字去挨个试除i，如果其中有一个数字整除了i，i就不是素数
		//如果所有的数字都不能整除i，i就是素数
		int j = 0;
		int flag = 1;//假设i是素数
		for (j = 2; j <= i - 1; j++)//2~8
		{
			if (i % j == 0)
			{
				flag = 0;//证明不是素数
				break;
			}
		}
		if (flag == 1)//是素数
		{
			printf("%d ", i);
			count++;
		}
	}

	printf("\ncount = %d\n", count);

	return 0;
}
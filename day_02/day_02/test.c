#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	/*int m = 3 + 5;
//	int n = m - 2;
//
//	printf("%d\n", m);
//	printf("%d\n", n);*/
//
//	/*int num = 5;
//	printf("%d\n", num * num);*/
//
//	printf("%d\n", 6 / 3);
//	printf("%d\n", 6 / 4);//1
//	printf("%f\n", 6 / 4.0);//1
//	printf("%f\n", 6.0 / 4);//1
//	printf("%f\n", 6.0 / 4.0);//1
//
//
//
//	// / 除号的两端都是整数的时候，计算的是整数除法，结果是整除之后的商~
//	//%f 是专门用来打印浮点数的 - float,小数点后默认是打印6位
//	//%lf 打印double类型的浮点数的
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int score = 5;
//    score = (score / 20.0) * 100;
//    printf("%d\n", score);
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 3.5;
//    printf("%d\n", a);
//
//    return 0;
//}


//int main()
//{
//	int ret = 6 % 4;//1....2
//	printf("%d\n", ret);//2
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 100;
//	////创建变量的同时给一个初始值，这叫初始化
//
//	//a = 200;//赋值
//
//	int a = 3;
//	int b = 5;
//	int c = 0;
//
//	c = b = a + 3;//连续赋值，从右向左依次赋值的。
//
//	printf("%d %d\n", b, c);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("%d\n", a);
//	//a = a + 3;
//	//a = a-3;
//	//a = a*3;
//	//a = a/3;
//	a /= 3;//复合赋值
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	//a = a + 1;
//	//a += 1;
//	//a++;//后置++
//	//++a;//前置++
//
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++
//	//a=a+1, b=a;
//	//计算口诀：先+1，后使用；
//
//	printf("a=%d\n", a);//11
//	printf("b=%d\n", b);//11
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++
//	//b=a, a=a+1;
//	//计算口诀：先使用，后+1
//
//	printf("a=%d\n", a);//11
//	printf("b=%d\n", b);//10
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//11
//	printf("%d\n", a);//11
//
//
//	return 0;
//}

//-- 就不难了

//int main()
//{
//	int a = 10;
//	int b = --a;//前置--
//	//a=a-1, b=a
//	//先--，再使用
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a--;//后置--
//	//b=a,a=a-1
//	//先使用，再--
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	printf("%d\n", (++a) + (++a) + (++a));//问题代码，是有问题的！！！
//
//	return 0;
//}
//

//int main()
//{
//	int a = -10;
//	printf("%d\n", -a);
//	return 0;
//}

//
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	//5.5
//	//6.7
//	return 0;
//}
//

//
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello\nworld\n");
//	//printf("there are 3 apples\n");
//	//printf("there are %d apples\n", 3);
//	//printf("there are %d apples\n", 5);
//
//	//printf("zhangsan will come tonight\n");
//	//printf("%s will come tonight\n", "张三");
//	//printf("%s will come tonight\n", "lisi");
//
//	//printf("%s说：现在是 %d 点\n", "翠花", 12);
//	//int num = 10;
//	//printf("%d\n", num);
//	//printf("%f\n", num);
//
//
//
//	return 0;
//}
//


//
//#include <stdio.h>
//int main()
//{
//    printf("%d\n", 123); 
//    printf("%5d\n", 123);//右对齐
//    printf("%5d\n", 1234567);//右对齐
//    printf("%-5dhehe\n", 123);//左对齐
//
//
//
//    return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    printf("%12f\n", 123.45);
//    return 0;
//}
//
//int main()
//{
//	printf("%+d\n", 10);
//	printf("%+d\n", -10);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("Number is %.2f\n", 5.2678);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    printf("%6.2f\n", 123456.5);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("%*.*f\n", 8, 2, 0.5);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    printf("%.3s\n", "hello world");
//    return 0;
//}
//


//int main()
//{
//	int score = 0;
//	printf("请输入成绩:");
//	//输入
//	scanf("%d", &score);//提供的是地址
//	printf("%d", score);
//
//	return 0;
//}

//int main()
//{
//	char arr[6] = { 0 };
//	scanf("%s", arr);//数组名本来就是地址，这里不需要取地址
//	printf("%s\n", arr);
//
//	return 0;
//}
//




//int main()
//{
//	int i = 0;
//	int j = 0;
//	float x = 0.0f;
//	float y = 0.0f;
//
//	scanf("%d%d%f%f", &i, &j, &x, &y);//1 -20 3.4 -4.0e3
//
//	printf("i = %d\n", i);
//	printf("j = %d\n", j);
//	printf("x = %f\n", x);
//	printf("y = %f\n", y);
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int x;
//    float y;
//
//    // 用户输入 "    -13.45e12# 0"
//    //0.45*10^12
//    scanf("%d", &x);
//    printf("%d\n", x);
//    scanf("%f", &y);
//    //0.449999994880
//    printf("%f\n", y);
//    return 0;
//}

//int main()
//{
//	//int n = 10;
//	//char arr[10] = { 0 }; 
//	//scanf("%s", arr);
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//EOF;//-1
//
//	int ret = scanf("%d%d%d", &a, &b, &c);
//	printf("ret = %d\n", ret);
//	printf("a=%d b=%d c=%d\n", a, b, c);
//
//	return 0;
//}

//一组输入
//
// 
//多组输入
//int main()
//{
//	int a = 0;
//	int b = 0;
//	/*while (scanf("%d %d", &a, &b) == 2)
//	{
//		int c = a + b;
//		printf("%d\n", c);
//	}
//	*/
//
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int c = a + b;
//		printf("%d\n", c);
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	char ch = '0';
//	//scanf("%d", &a);
//	//printf("%d\n", a);
//
//	scanf(" %c", &ch);
//	printf("%cxxxxx\n", ch);
//
//	return 0;
//}

//
//int main()
//{
//	char arr1[10] = { 0 };//abc\0
//	char arr2[10] = { 0 };//def\0
//
//	scanf("%s %s", arr1, arr2);//   abc  def
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//    char name[11];
//    scanf("%10s", name);
//    printf("%s\n", name);
//
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

#include <stdio.h>

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;

    //scanf("%d-%d-%d", &year, &month, &day);
    //2023-11-22
    scanf("%d%*c%d%*c%d", &year, &month, &day);
    printf("%d %d %d\n", year, month, day);
    return 0;
}
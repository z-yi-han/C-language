#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//创建出一个新的类型
//自定义的类型
//
//
//struct Student
//{
//	char name[20];//名字
//	int age;//年龄
//	int high;//身高
//	float weight;//体重
//	char id[16];//学号
//}s4, s5, s6;//这里的分号不能少
////s4, s5, s6 是结构体变量（全局的）
//
//struct Student s7;//全局的

//int main()
//{
//	struct Student s1 = {"张三", 20, 180, 75.5f, "20230901022"};//初始化
//	struct Student s2 = {.age=30, .name="lisi", .weight=80.5f, .high=177, .id="20220101033"};
//
//	printf("%s %d %d %.1f %s\n", s1.name, s1.age, s1.high, s1.weight, s1.id);
//	//结构体变量.成员名
//
//	//struct Student s3;
//	//s1, s2, s3是三个结构体变量（局部的）
//
//
//	return 0;
//}

#include <stdio.h>

//struct S
//{
//	char c;
//	int n;
//};
//
//struct B
//{
//	struct S s;
//	int* p;
//	char arr[10];
//	float sc;
//};
//
//int main()
//{
//	struct B b = { {'w', 99}, NULL, "hehe", 85.5f};
//	printf("%c\n", b.s.c);
//
//	return 0;
//}
//



//int main()
//{
//	3 + 4 * 5;
//
//	return 0;
//}
//

//
//int main()
//{
//	char a = 3;//char -- signed char
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010 - c
//	//
//	//%d - 以10进制的形式打印有符号的整数
//	//11111111111111111111111110000010 --- C提升后的结果
//	//10000000000000000000000001111101
//	//10000000000000000000000001111110  -- 原码
//	printf("%d\n", c);//-126
//
//	return 0;
//}

#include <stdio.h>
//
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    //       2       3       4
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//输出多少？
//    return 0;
//}


#include <stdio.h>
//
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("%d\n", ret);
//    printf("%d\n", i);
//    return 0;
//}
//

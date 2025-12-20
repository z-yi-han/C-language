#include <stdio.h>

//stdio.h - 标准输入输出头文件
//.h 头文件
//std standard
//i -- input
//o -- output

//int main()
//{
//	//printf("张三\n李四\n");
//	//printf("hehe\n");
//	printf("%d\n", 100);
//	printf("%c\n", 100); 
//	printf("%c\n", 'w');
//	printf("%lf\n", 3.5);
//	printf("%f\n", 3.5f);
//
//	return 0;
//}



//int main()
//{	
//	//写代码
//	printf("hehe\n");
//
//	return 0;
//}

//main函数有且仅有一个
//int main()
//{
//	//写代码
//	printf("haha\n");
//
//	return 0;
//}


//调整字体：按住ctrl,然后滑动鼠标的滚轮


//main函数的多种写法

//古老的写法 - 不推荐
//void main()
//{
//
//}

//不正常的写法-错的写法
//main()
//{
//	
//}
//

//ok
//int main()
//{
//	return 0;
//}

//ok
//int main(void) //void 的意思就是告诉你main函数没有参数
//{
//	return 0;
//}

//ok -   main函数是可以有参数的，参数是特殊用途的
//如果不想使用参数，可以不写
//写了也可以不用
//至于参数是什么意思，暂时不行

//
//int main(int argc, char* argv[])
//{
//	return 0;
//}
//

//int main()
//{
//	int char;//err
//	int void;//err
//
//	return 0;
//}


//int main()
//{
//    //# $ % ^ a b c d 
//	//'a';
//	//a - 1
//	//b - 2
//	//c  -3
//	//...
//	//0 - 数字0 
//	//'0' -  字符0 --ASCII 码值 48
//	printf("%c\n", 'A');//'A' - 65
//	printf("%c\n", 'A'+32);
//	printf("%d\n", '\n');
//	printf("%d\n", 'A');
//	printf("%c\n", 65);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//		if (i % 16 == 15)
//			printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	'a';//字符
//	//字符串呢？
//	"abc";
//	printf("%c\n", 'Y');
//	printf("%s\n", "Yes");
//	printf("Yes");
//
//	return 0;
//}


//int main()
//{
//	//printf("%s\n", "abc");
//
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c', '\0'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//
//

//int main()
//{
//	//printf("abc\ndef");
//	//    \? -- 用于三字母词
//	//三字母词：??) --> ]
//	//        ??( ---> [
//
//	printf("(are you \?\?)");//(are you oK]
//
//	return 0;
//}

//int main()
//{
//	//printf("%c\n", 'a');
//	//printf("%c\n", '\'');
//
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("abc\\ndef");
//
//	return 0;
//}
//
int main()
{
	//printf("c:\\test\\net\\hehe.c");
	//printf("\a");
	//printf("abcdef\bqwe");
	//printf("abcdef\r");
	printf("ab\tdef\tq\theheh");
	//Tab -4个字节,8个字节

	return 0;
}

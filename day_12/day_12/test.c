#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int a = 0;
//	float f = 0.0f;
//
//	char* p = &a;
//	int* p2 = &f;
//
//	//void* p = &a;//int*
//	//p = &f;//float*
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//
//	void* p = &a;
//
//	//*p = 20;//err
//	//p = p + 1;//err
//
//	return 0;
//}

//int main()
//{
//	const int a = 10;//a具有了常属性（不能被修改了）
//	//a 是不是常量呢？虽然a是不能被修改的，但是本质上还是变量
//	//常变量
//	// 
//	//a = 20;
//	//在C++ 中const修饰的变量就是常量
//	//
//	int arr[a];
//	printf("%d\n", a);
//
//	return 0;
//}
//

//int main()
//{
//	const int a = 10;
//	//a = 20;//err
//
//
//	int* p = &a;
//	*p = 0;
//
//	printf("a = %d\n", a);
//
//	return 0;
//}
//


//int main()
//{
//	int a = 10;//&a--0x0012ff40
//	int b = 20;//&b--0x0012ff44
//
//	int  * const p = &a;//0x0012ff40
//	//p = &b;//err
//	*p = 100;
//	printf("%d\n", a);//
//
//	//const 修饰指针变量的时候，放在*的右边
//	//const 限制的是指针变量本身，指针变量不能再指向其他变量了
//	//但是可以通过指针变量，修改指针变量指向的内容
//	//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int const * p = &a;
//	//p = &b;//ok
//	//*p = 100;//err
//	//const 修饰指针变量时，放在*的左边，限制的是：指针指向的内容，不能通过指针来修改指向的内容
//	//但是可以修改指针变量本身的值（修改的指针变量的指向）
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 100;
//	int const * const p = &a;
//	p = &b;//err
//	*p = 0;//err
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印数组的内容
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//指针的方式
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	return 0;
//}

//指针-指针计算的前提条件一定是：两个指针指向了同一块空间！

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%zd\n", &arr[0] - &arr[9]);
//	printf("%zd\n", &arr[9] - &arr[0]);
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = {0};
//
//	printf("%d\n", &ch[4] - &arr[6]);//err
//
//	return 0;
//}
//

#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//		str++;
//
//	return str - start;//指针-指针
//}
//
//
//int main()
//{
//	//strlen -  求字符串长度的, strlen统计的是字符串中\0之前的字符个数
//	char arr[] = "abcdef";
//	//[a b c d e f \0]
//
//	int len = my_strlen(arr);//数组名arr是数组首元素的地址 arr == &arr[0]
//	printf("%d\n", len);
//
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	int* p = arr;//&arr[0]
//
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int* p;
//	printf("%p\n", p);
//	//*p = 20;
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int*p = arr;//p此时不是野指针
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}


//3. 指针指向的空间释放

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	printf("%d\n", *p);
//
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int* p1 = &a;
//	//*p1 = 20;
//
//	int* p2 = NULL;
//	if (p2 != NULL)
//	{
//		
//	}
//	//*p2 = 100;//err
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = NULL;
//
//	assert(p != NULL);
//	*p = 20;
//	printf("%d\n", *p);
//
//	return 0;
//}

//1. assert 出现错误的时候，直接会报错，指明在什么文件，哪一行
//2. 

//#define NDEBUG
#include <assert.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	assert(n > 3);
//
//	//if (n > 3)
//	//{
//	//	//...
//	//}
//
//	return 0;
//}
//
//size_t my_strlen(const char * str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}


//写一个函数，交换两个整数的内容
//
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a=%d b=%d\n", a, b);
//	//当实参传递给形参的时候，形参是实参一份临时拷贝
//	//对形参的修改不会影响实参的
//
//	Swap1(a, b); //传值调用
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	
//	int* p = &a;
//
//	*p = 20;
//	return 0;
//}


//写一个函数，交换两个整数的内容
//
void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;//tmp = a
	*pa = *pb;//a = b
	*pb = tmp;//b = tmp
}

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前:a=%d b=%d\n", a, b);

	Swap2(&a, &b); //传址调用
	printf("交换后:a=%d b=%d\n", a, b);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int arr[10] = {0};
//	int* p1 = &arr[0];
//	int* p2 = arr;//数组名是数组首元素的地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr      = %p\n", arr);
//	printf("arr+1    = %p\n", arr+1);
//
//	printf("&arr[0]  = %p\n", &arr[0]);
//	printf("&arr[0]+1= %p\n", &arr[0]+1);
//
//	printf("&arr     = %p\n", &arr);
//	printf("&arr+1   = %p\n", &arr+1);
//
//	//printf("%zd\n", sizeof(arr));
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//使用指针来访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入10个值
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//输入1个值
//		scanf("%d", p+i);//p+i == &arr[i]
//	}
//
//	//输出10个值
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", i[arr]);//p[i]  arr[i]  *(arr+i)
//	}
//
//	return 0;
//}


//void Print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

//数组传参的时候，形参是可以写成数组的形式的
//但是本质上还是指针变量
//
//void Print(int arr[10])//int* arr
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//得不到元素个数的
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void Print(int* p,int sz) //应该是指针
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);//arr 数组名就是数组首元素的地址
//
//	//sizeof(arr)
//	//&arr
//	return 0;
//}
//
//
////升序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//假设已经有序了
//		int flag = 1;
//		//一趟排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	//打印
//	print_arr(arr, sz);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;//p就是一级指针
//
//	int * * pp = &p;
//
//	int** * ppp = &pp;
//	int**** pppp = &ppp;
//	//.....
//	return 0;
//}
//

//int main()
//{
//	int a = 10;
//	int* p = &a;//p就是一级指针
//
//	int * * pp = &p;
//	printf("%p\n", *pp);
//	printf("%d\n", **pp);//10
//
//	printf("%p\n", &a);
//
//	return 0;
//}
//


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[] = { arr1, arr2, arr3 };
//
//	//打印数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//


//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;//pc 是指针变量
//
//	char arr[10] = "abcdef";
//	char* p1 = arr;
//	*p1 = 'w';
//
//	const char * p2 = "abcdef";
//	//*p2 = 'w';//err
//
//	//%s 打印字符串的时候，需要提供起始地址
//
//	printf("%s\n", p1);
//	printf("%s\n", p2);
//	printf("%s\n", arr);
//
//	return 0;
//}
//



#include <stdio.h>

//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");//1
//    else
//        printf("str1 and str2 are not same\n");//2
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");//1
//    else
//        printf("str3 and str4 are not same\n");//2
//
//    return 0;
//}


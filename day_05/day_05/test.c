#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char ch[6];
//	int data1[10] = { 0 };
//	int data2[10] = { 1,2,3 };
//	char ch[5] = { 'a','b' };
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//求数组元素个数
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%zd\n", sizeof(arr));//总大小
//	printf("%zd\n", sizeof(arr[0]));//一个元素的大小
//	printf("%zd\n", sizeof(arr)/sizeof(arr[0]));//元素个数
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char ch[5][8];
//	float math[4][20];
//	int data[3][5] = { 1,2,3 };
//	int data2[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int daat3[3][5] = { {1,2},{3,4},{5,6} };
//	int arr5[][5] = { 1,2,3 };
//	int arr6[][5] = { 1,2,3,4,5,6,7 };
//	int arr7[][5] = { {1,2}, {3,4}, {5,6} };
//
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//C99之前数组的大小只能使用常量或者常量表达式指定
//int main()
//{
//	int arr1[5];
//	int arr2[3 + 5];
//	int arr3[8];
//	int arr4[] = { 1,2,3,4 };
//	int arr5[] = { 0 };//
//
//	int n = 10;
//	//int arr6[n];//不能使用变量
//
//	return 0;
//}
////在C99中引入了变长数组的概念，这时创建数组的时候可以使用变量来指定大小
////但是遗憾的时VS中不支持变长数组
//        数组练习
//1.多个字符从两端移动，向中间汇聚
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to han!!!!!!";
//	char arr2[] = "********************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//毫秒为单位
//		system("cls");//清理屏幕信息
//		left++;
//		right--;
//	}
//	return 0;
//}
//2.二分查找(折半查找)
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//		int k = 17;//在数组中查找7
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是:%d", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//在数组中查找7

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int flag = 0;

	int left = 0;
	int right = sz-1;

	while (left <= right)
	{
		//int mid = (left + right) / 2;
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			flag = 1;
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (flag == 0)
		printf("找不到了\n");

	return 0;
}

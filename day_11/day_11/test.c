#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int a = 10;
//	//&a --- & 取地址操作符
//	//& 单目操作符
//	//printf("%p\n", &a);
//	int* p = &a;//p是一个变量（指针变量），是一块空间
//	//编号 - 地址 - 指针
//
//	return 0;
//}
//


//int main()
//{
//	char ch = 'w';
//	char * pc = &ch;
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//
//	int * p = &a;
//	*p = 0;//* - 解引用操作符（间接访问操作符）
//
//	//a = 0;
//
//	//*&a = 0;//a = 0
//	printf("%d", a);//0?
//
//	return 0;
//}
//


//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(short*));
//
//	return 0;
//}
//
//


//int main()
//{
//	int a = 0x11223344;
//	char * pa = &a;
//	*pa = 0;
//
//	return 0;
//}


int main()
{
	int a = 10;
	int* pa = &a;
	char* pc = &a;

	printf("%zd\n", sizeof(pa));
	printf("%zd\n", sizeof(pc));

	printf("pa   = %p\n", pa);
	printf("pa+1 = %p\n", pa + 1);

	printf("pc   = %p\n", pc);
	printf("pc+1 = %p\n", pc + 1);

	return 0;
}

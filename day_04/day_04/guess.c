#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	//RAND_MAX;
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%199+1);
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand()%100+1);
//	return 0;
//}
void menu()
{
	printf("******************\n");
	printf("***   1.play   ***\n");
	printf("***   0.exit   ***\n");
	printf("******************\n");
 }
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	int count = 5;
	while (count)
	{
		printf("你还有%d次机会\n", count);
		printf("请输入要猜的数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了！数字是%d\n", ret);
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("很遗憾，5次机会全部用完，挑战失败，随机数是%d\n", ret);
	}
	}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);
	return 0;
}
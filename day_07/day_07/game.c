#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char arr[ROWS][COLS], int rows, int cols,char ch)
{
	int i = 0;
	for (i = 0;i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = ch;
		}
	}
}
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("--------扫雷游戏-------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%2d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%2d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%2c ", arr[i][j]);
		}
		printf("\n");
	}
}
void setMine(char arr[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}
static int GetMineCount(char mine[ROWS][COLS],int x,int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y -1] + mine[x + 1][y] +
		mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0') ;
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查的坐标: ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break; /* 跳出 FindMine 内部循环 */
				}
				else
				{
					//统计该坐标周围有几个雷
					int count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("该坐标已经被排查了\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if(win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}
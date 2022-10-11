//练习题

//打印菱形
//题目内容:用C语言在屏幕上输出以下图案:

#include <stdio.h>

int main()
{
	int line = 0;
	scanf("%d", &line);//7
	
	//打印上半部分
	int i = 0;
	for ( i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for ( j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for ( j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//打印下半部分
	for ( i = 0; i < line - 1; i++)
	{
		int j = 0;
		//打印空格
		for ( j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*
		for ( j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
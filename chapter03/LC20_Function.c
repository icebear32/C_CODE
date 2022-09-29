//乘法口诀表
//题目内容 :
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如 : 输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表


#include <stdio.h>

void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d + %d = %-3d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);

	return 0;
}

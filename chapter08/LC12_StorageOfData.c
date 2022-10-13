//C语言数据类型

//练习5 - 代码输出的是什么？

#include <stdio.h>
#include <Windows.h>

/*
	因为是 unsigned ,无符号数
	没有负数，所以打印完 9 8 7 6 5 4 3 2 1 0后进入死循环
	代码错误
*/
int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(100);
	}

	return 0;
}
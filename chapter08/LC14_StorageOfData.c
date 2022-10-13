//C语言数据类型

//练习7 - 代码输出的是什么？
#include <stdio.h>

unsigned char i = 0;//0 - 255

int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("Hello World\n");
	}

	return 0;
}
/*
	代码死循环
	因为 char类型的无符号数 255 + 1 = 0
	i <= 255 就相当于一个恒成立的条件
	所以代码错误，会进行死循环
*/
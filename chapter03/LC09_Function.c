//函数的嵌套调用

#include <stdio.h>

void new_line()
{
	printf("hehe\n");//打印hehe
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)//2、进入three_line()函数
	{
		new_line();//3 开始for循环for循环进行三次调用new_line()函数
	}
}

int main()
{
	three_line();//1、开始运行，遇到three_line()函数

	return 0;
}
//函数链式访问例子

#include <stdio.h>

int main()
{
	//3			//2			//1
	printf("%d", printf("%d", printf("%d", 43)));
	//结果是什么？
	/*
		printf开始打印43，返回的是两个字符
		所以第二个printf打印2，而2是一个字符
		所以第三个printf打印1
	*/

	return 0;
}
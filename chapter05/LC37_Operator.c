//下标引用、函数调用和结构成员

/*
	()函数调用操作符：
		()函数调用操作符接受一个或者多个操作数︰
		第一个操作数是函数名，剩余的操作数就是传递给函数的参数。
*/
#include <stdio.h>

void test1()
{
	printf("hehe\n");
}
void test2(const char* str)
{
	printf("%s\n", str);
}
int main()
{
	test1();            //实用（）作为函数调用操作符。
	test2("hello world");//实用（）作为函数调用操作符。

	return 0;
}
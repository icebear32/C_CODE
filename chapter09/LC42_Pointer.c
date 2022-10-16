//回调函数

#include <stdio.h>

void print(char* str)
{
	printf("hehe:%s", str);
}

void test(void (*p)(char*))//2、接受一个函数的地址
{
	printf("test\n");
	p("hello");//3、使用接受的函数的地址 调用该函数 
}

int main()
{
	test(print);//1、开始调用test函数，向test函数传入一个函数的地址

	return 0;
}
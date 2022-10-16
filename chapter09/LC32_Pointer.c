//函数指针

//调用函数指针
//函数的地址要想保存起来，怎么保存？
#include <stdio.h>

void Print(char* str)
{
	printf("%s\n", str);
}

int main()
{
	void (*p)(char*) = Print;
	(*p)("hello world");

	return 0;
}
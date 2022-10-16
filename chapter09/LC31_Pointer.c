//函数指针

//调用函数指针
//函数的地址要想保存起来，怎么保存？
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int (*pa)(int, int) = Add;//函数指针
	printf("%d\n", (*pa)(2, 3));//5	//调用函数指针，对参数进行操作

	return 0;
}
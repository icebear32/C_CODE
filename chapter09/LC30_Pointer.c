//函数指针
/*
    函数指针 - 打印函数地址

    数组指针 – 是指向数组的指针

    函数指针 – 是指向函数的指针

    &函数名 和 函数名都是函数的地址
*/

#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b));//30

	//输出的是两个地址，这两个地址是 test 函数的地址
	// &函数名 和 函数名 都是函数的地址
	//函数就一个，打印的地址都一样
	printf("%p\n", &Add);//打印函数地址
	printf("%p\n", Add);//打印函数首地址

	return 0;
}